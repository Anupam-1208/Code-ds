#include<iostream>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode *left;
    treeNode *right;
};
void _printInOrder(treeNode* node) {
      // Base case: if node is nullptr, then print a space and return.
      if (!node) {
        std::cout << " ";
        return;
      }
      else {
        // Recurse left:
        _printInOrder(node->left);
        // Print this node:
        cout << node->data ;
        // Recurse right:
        _printInOrder(node->right);
      }
    }
treeNode *createNode(int data){
    treeNode *temp = new treeNode();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}
void insert(treeNode *root,int data){
    if(root == NULL){
        treeNode *temp = createNode(data);
        root = temp;
        return;}
    else{
        if(root->data>data){
            insert(root->left,data);
        }
        else
        {
            insert(root->right,data);
        }
        
    }

}
treeNode *find_max(treeNode *root){
    if(root->right == NULL)
        return root;
    treeNode* max = find_max(root->right);
    return max; 
}
void delete_node(treeNode *root,int val){
    if(root == NULL)
        return;
    if(val>root->data)
        delete_node(root->right,val);
    if(val<root->data)
        delete_node(root->left,val);
    // has 2 child
    // has 1 child
    // has 0 child
    if(root->left != NULL && root->right != NULL){
        treeNode* temp = root;
        temp = find_max(root->left);
        root->data = temp->data;
        delete_node(root->left,temp->data); 
    }
    else
    {
        if(root->left == NULL)
            root = root->right;
        else
            root = root->left;
    }
    

}
int main(){
    treeNode *t;
    insert(t,6);
    cout<<t->data;
    insert(t,4);
    insert(t,9);
    insert(t,18);
    insert(t,3);
    _printInOrder(t);
    return 0;


}