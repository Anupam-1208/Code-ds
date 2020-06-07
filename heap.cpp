#include<iostream>
#include<vector>
using namespace std;
class heap{
    vector<int> A;
    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }
    void heapify_up(int i){
        if(i && A[i]>A[parent(i)]){
                swap(A[i],A[parent(i)]);
                i = parent(i);
                heapify_up(i);
        }
         
    }
    void heapify_down(int i){
        int l = left(i);
        int r = right(i);
        int largest =i;
        if(l<=A.size() && A[i]<A[l])
            largest = l;
        if(r<=A.size() &&A[largest]<A[r])
            largest = r;
        if(i != largest){
            swap(A[i],A[largest]);
            heapify_down(largest);
        }

    }
    public:
    int top(){
        return A.front();
    }
    void pop(){
        A[0] = A.back();
        A.pop_back();
        heapify_down(0);
    }
    void push(int val){
        A.push_back(val);
        heapify_up(A.size()-1);
    }
    int size(){
        return A.size();
    }


};

int main(){
    heap h;
    h.push(10);
    h.push(20);
    h.pop();
    cout<<h.top();
    return 0;
}