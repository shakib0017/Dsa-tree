#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *left,*right;
    Node(int value ){
        data =value;
        left=right=nullptr;
    }
};
Node *createBinaryTree(){
    int x;
    cin>>x;
    if (x==-1)
    {
        return nullptr;
    }
    
    Node *temp=new Node(x);
    cout<<"Enter Left root of "<<x<<":";
    temp->left=createBinaryTree();
    cout<<"Enter right root of "<<x<<":";
    temp->right=createBinaryTree();

    return temp;

}
int maxtree(Node *root ){
    if (root==nullptr)
    {
        return 0;
    }
    return max(maxtree(root->left),maxtree(root->right));
    

}
int height(Node*root ){
        // code here 
        if(root==nullptr){
         return 0;
        }
    return max(height(root->left ),height(root->right ));
    }
int main(){
    Node *root;
    cout<<"Enter root:";
    root=createBinaryTree();
    cout<<"max:";
    cout<<height(root);
}