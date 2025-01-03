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
int main(){
    queue<Node*> q;
    int x;
    cout<<"Enter root Node:\n";
    cin>>x;
    Node *root=new Node(x);
    q.push(root);
    while (!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cout<<"Enter left value of :"<<temp->data<<" :";
        cin>>x;
        if (x!=-1)
        {
            temp->left=new Node(x);
            q.push(temp->left);
        }
        cout<<"Enter right value of :"<<temp->data<<" :";
        cin>>x;
        if (x!=-1)
        {
            temp->right=new Node(x);
            q.push(temp->right);
        }
    }
    

}