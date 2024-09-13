#include <iostream>
#include <queue>
using namespace std;


//The implementation of the binary tree is finished

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

Node *buildTree()
{
    cout << "Enter the data (-1 for NULL): " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    cout << "Enter data for inserting in the left of " << data << endl;
    root->left = buildTree();
    cout << "Enter data for inserting in the right of " << data << endl;
    root->right = buildTree();

    return root;
}

/// Level Order Traversal
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return; // Handle empty tree

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void Inorder_Count_Leaf(Node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }

    // Recursive call on the left subtree
    Inorder_Count_Leaf(root->left, count);

    // Check if the current node is a leaf node
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }

    // Recursive call on the right subtree
    Inorder_Count_Leaf(root->right, count);
}

void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

/**
 * @brief Main function
 *
 * @return int
 */
int main()
{
    Node *root = NULL;
    root = buildTree();

    cout << "Inorder Traversal: " << endl;
    Inorder(root);

    int leafCount = 0;
    Inorder_Count_Leaf(root, leafCount);

    cout << "The number of leaf nodes is: " << leafCount << endl;

    return 0;
}
