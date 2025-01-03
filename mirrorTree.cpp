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
    void MirrorTree(Node *root){
    if (root==nullptr)
    {
        return ;
    }
    Node *temp=root->left;
    root->left=root->right;
    root->right=temp;

    MirrorTree(root->left);
    MirrorTree(root->right);
    
}

int main()
{
    cout<<"Enter the root node: ";
    Node *root=createBinaryTree();
    cout<<"";
    MirrorTree(root);

    
}


