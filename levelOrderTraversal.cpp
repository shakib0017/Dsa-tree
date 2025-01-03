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
void levelOrder(Node *root){
    vector<int> ans;
    queue<Node*> q;
    Node *temp;
    q.push(root);
    while (!q.empty())
    {
        temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    

}
int main()
{
    cout<<"Enter the root node: ";
    Node *root=createBinaryTree();
    cout<<"Level order traversal:";
    levelOrder(root);
    
}
