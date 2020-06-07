#include<iostream>
using namespace std;
class treeNode{
    public:
    int data;
    treeNode *left;
    treeNode *right;
    treeNode(){
        left = NULL;
        right = NULL;
    }
};
void _printInOrder(treeNode* node) {
      // Base case: if node is nullptr, then print a space and return.
      if (node == NULL) {
        cout << " ";
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
int max(int a,int b){
        if(a>b)
        return a;
        else 
        return b;
    }
treeNode *createNode(int data){
    treeNode *temp = new treeNode();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}

int height(treeNode* root){
    if(root == NULL)
    return -1;
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}
bool checkbalance(treeNode* root){
    if((height(root->left) - height(root->right) > 1) || (height(root->left) - height(root->right) < -1)){
        cout<<height(root->left) - height(root->right)<<"\trebalancing\n";
        return false;
    }
    else{
        return true;
    }
}
treeNode *rotateLL(treeNode* root){
    treeNode *temp = root->left;
    root->left = temp->right;
    temp->right = root;
    return temp;
    
}
treeNode* rotateRR(treeNode* root){
    treeNode *temp = root->right;
    root->right = temp->left;
    temp->left = root;
    return temp;
}
treeNode* rotateLR(treeNode* root){
    root->left = rotateRR(root->left);
    return rotateLL(root);
}
treeNode *rotateRL(treeNode* root){
    root->right = rotateLL(root->right);
    return rotateRR(root);
}

treeNode *rebalance(treeNode *root){
    if(height(root->left)-height(root->right)>1){
        if(height(root->left->left) > height(root->left->right))
            root =rotateLL(root);
        else
           root = rotateLR(root);
        
    }
    else{
        if(height(root->right->right)>height(root->right->left))
            root = rotateRR(root);
        else 
            root = rotateRL(root);
    }
    return root;

}
treeNode* add(treeNode *root,treeNode *temp){
    if(root->data < temp->data){
        if(root->right == NULL)
        root->right = temp;
        else
        root->right = add(root->right,temp);
    }       
    else{
        if(root->left == NULL)
        root->left = temp;
        else
        root->left = add(root->left,temp);
    }
    if(!checkbalance(root)){
        root = rebalance(root);
    } 
    return root;
}
treeNode* add(treeNode *root, int data) 
{
    treeNode *temp = createNode(data); 
    if(root==NULL){
        root = temp;
        return root;
    }
   return  add(root,temp);
}

treeNode *find_max(treeNode *root){
    treeNode *curr = root;
    while(curr && curr->right!=NULL){
        curr = curr->right;
    }
    return curr;
}
treeNode* delete_node(treeNode *root,int val){
    if(root == NULL)
        return root;
    else if(val>root->data)
        root->right =  delete_node(root->right,val);
    else if(val<root->data)
        root->left = delete_node(root->left,val);
    else{
        treeNode* temp = NULL;
    // has 2 child
    // has 1 child
    // has 0 child
    if(root->left != NULL && root->right != NULL){
        temp = find_max(root->left);
        root->data = temp->data;
        root->left = delete_node(root->left,temp->data); 
    }
    else
    {
        temp = root;
        if(root->left == NULL)
            root = root->right;
        else
            root = root->left;
        delete temp;
    }
    }
    return root;

}


int main(){
    treeNode *root = NULL;
    root = add(root,18);
    root = add(root,5);
    root = add(root,20);
    root = add(root,19);
    root = add(root,3);
    root = add(root,1);
    root = add(root,4);
    root = add(root,2);
    root = add(root,1);
    root = add(root,21);
    root = add(root,22);
    cout<<checkbalance(root)<<endl;
    _printInOrder(root);
    
    return 0;
}