# include<iostream>
# include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int a)
    {
        this->data = a;
        this->left = NULL;
        this->right = NULL;
    }
};

void createTree(Node *root)
{
    int data;
    cin>>data;
    root = new Node(data);

    if(root == NULL)
    {
        return;
    }

    else
    {
        root->left = new Node(root->left);
        root->right = new Node(root->right);
        return root;
    }



}

int main()
{

}