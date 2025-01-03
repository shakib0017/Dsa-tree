#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
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
    cout<<"Enter left child of  "<<x<<" :";
    temp->left=createBinaryTree();
    cout<<"Enter right child of  :"<<x<<" :";
    temp->right=createBinaryTree();
    return temp;
}
void preOrder(Node *root){
    if (root==nullptr)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root){
    if (root==nullptr)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node *root){
    if (root==nullptr)
    {
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    cout<<"Enter the root node: ";
    Node *root=createBinaryTree();
    cout<<"\nPre Order:\n";
    preOrder(root);
    cout<<"\nin Order:\n";
    inOrder(root);
    cout<<"\npost Order:\n";
    postOrder(root);

    
}

