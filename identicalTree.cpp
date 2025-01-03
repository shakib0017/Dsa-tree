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
bool identicalTree(Node *root1,Node *root2){
    if (root1==nullptr && root2==nullptr)
    {
        return true;
    }
    if ((root1==nullptr && root2) || ((root2==nullptr)&& root1))
    {
        return false;
    }
    if (root1->data!=root2->data)
    {
        return false;
    }
    return identicalTree(root1->left,root2->left)&&identicalTree(root1->right,root2->right);
}

int main()
{
    cout<<"Enter the root node of 1st tree: ";
    Node *root1=createBinaryTree();
    cout<<"Enter the root node of 2nd tree: ";
    Node *root2=createBinaryTree();
    cout<<"Identical:";
    if(identicalTree(root1,root2)){
        cout<<" Yes";
    }
    else{
        cout<<" No";
    }

    
}

