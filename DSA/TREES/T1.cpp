#include <iostream>
#include <queue>
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

    int count1 = 0;

    Inorder(root->left, count1);

    if (root->left == NULL && root->right == NULL)
    {
        count1++;
    }

    Inorder(root, count1);

    printf("The no of times the variable is printed =  %d \n", count1);
}

void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    else
    {
        Inorder(root->left);
        cout << root->data << endl
             << endl;
        Inorder(root->right);
    }
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
    cout << "Level Order Traversal: " << endl;
    Inorder(root);

    int cnt = 0;
    Inorder_Count_Leaf(root, cnt);

    return 0;
}
