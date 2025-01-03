#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    char data;
    Node *left,*right;
    Node(char value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};
Node *createBinaryTree(){
    char x;
    cin>>x;
    if (x=='-1')
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
int height(Node*root ){
        // code here 
        if(root==nullptr){
         return 0;
        }
    return 1+max(height(root->left ),height(root->right ));
    }
    int main()
{
    cout<<"Enter the root node: ";
    Node *root=createBinaryTree();
    cout<<"height";
    cout<<height(root);

    
}