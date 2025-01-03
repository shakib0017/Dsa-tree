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
bool isCousine(Node *root ,int a ,int b){
    queue<Node*>q;
    q.push(root);
    int l1=-1;
    int l2=-1;
    int level=0;
    while (!q.empty())
    {
        int n=q.size();
        while (n--)
        {
            Node *temp=q.front();
            q.pop();
            if (temp->data==a)
                l1=level;
            if (temp->data==b)
            {
                l2=level;  
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            
            
        }
        level++;
        if (l1!=l2)
        {
            return 0;
        }
        
    }
    
}