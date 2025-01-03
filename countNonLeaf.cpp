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
int  preOrder(Node *root){
    if (root==nullptr)
    {
        return 0;
    }
    if (root->left== nullptr && root->right==nullptr)
    {
        return 0 ;
    }
    
    
    return 1+preOrder(root->left)+preOrder(root->right);
    
}

int main()
{
    cout<<"Enter the root node: ";
    Node *root=createBinaryTree();
    cout<<"Non-leaf Node:";
    cout<<preOrder(root);

    
}

