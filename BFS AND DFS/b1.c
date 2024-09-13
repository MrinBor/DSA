#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node_Details
{
    char color[10];
};

void DFS_visit(struct Node_Details *a, int u, int *arr)
{
    strcpy(a[u].color, "GRAY");
    printf("Node %d visited\n", u);
    for (int i = 0; i < u; i++)
    {
        if (strcmp(a[i].color, "WHITE") == 0)
        {
            DFS_visit(a, i, arr);
        }
    }
    strcpy(a[u].color, "BLACK");
}

void DFS(struct Node_Details *a, int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        strcpy(a[i].color, "WHITE");
    }

    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].color, "WHITE") == 0)
        {
            DFS_visit(a, i, arr);
        }
    }
}

int main()
{
    int n = 5;
    struct Node_Details *nodes = (struct Node_Details *)malloc(n * sizeof(struct Node_Details));

    DFS(nodes, n, NULL);

    free(nodes); // free the dynamically allocated memory

    return 0;
}
