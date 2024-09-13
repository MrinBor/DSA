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
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node *buildTree()
{
    cout<<"Enter the data or -1 to exit "<<endl;
    int data;
    cin>>data;

    if(data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    root->left = buildTree();
    root->right =buildTree();

    return root;

}


void Inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }


    Inorder(root->left);
    printf("%d\n",root->data);
    Inorder(root->right);
}


/***
 * 
 * Post order traversla is LRN
 * 
 * Now we will have the following
 * 
 * 
 * 
 */

int main()
{
    Node *root = NULL;
    root = buildTree();


    Inorder(root);
}