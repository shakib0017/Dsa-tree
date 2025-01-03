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
void  preOrder(Node *root,int &count){
    if (root==nullptr)
    {
        return ;
    }
    count+=1;
    preOrder(root->left,count);
    preOrder(root->right,count);
    
}
int count1(Node *root){
    int count=0;
    preOrder(root,count);
    return count ;
}

int main()
{
    cout<<"Enter the root node: ";
    Node *root=createBinaryTree();
    cout<<"\nsize:\n";
    int count=0;
    cout<<count1(root);

    
}

