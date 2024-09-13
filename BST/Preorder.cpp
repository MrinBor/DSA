# include<iostream>
using namespace std;

void Preorder(Node)
{
    if(Node == NULL)
    {
        return;
    }

    else
    {
        printf("%d ",Node->data);
        Preorder(Node->left);
        Preorder(Node->right);
    }

}

int main()
{

}