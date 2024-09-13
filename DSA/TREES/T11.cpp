# include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int a)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node *buildTree(Node *root)
{
    int data;
    cin>>data;

    Node *root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }

    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
    
    return root;

}

//The sequence is as follows
/**
 * @brief 
 * Node left right
 * or N L R
 * This is a particular sequence
 * 
 * 
 * @return int 
 */
int main()
{

}