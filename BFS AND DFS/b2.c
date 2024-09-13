
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node_Details
{
    char color[10];
};

void BFS(struct Node_Details *a, int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        strcpy(a[i].color, "WHITE");
    }

    // Assuming the starting node is 0
    int queue[n];
    int front = 0, rear = 0;
    queue[rear++] = 0;
    strcpy(a[0].color, "GRAY");

    while (front != rear)
    {
        int u = queue[front++];
        printf("Node %d visited\n", u);

        for (int i = 0; i < n; i++)
        {
            if (arr[u * n + i] && strcmp(a[i].color, "WHITE") == 0)
            {
                queue[rear++] = i;
                strcpy(a[i].color, "GRAY");
            }
        }
        strcpy(a[u].color, "BLACK");
    }
}

int main()
{
    int n = 5; // Assuming the number of nodes is 5
    int graph[5][5] = {{0, 1, 1, 0, 0},
                       {1, 0, 0, 1, 0},
                       {1, 0, 0, 1, 1},
                       {0, 1, 1, 0, 1},
                       {0, 0, 1, 1, 0}};

    struct Node_Details *nodes = (struct Node_Details *)malloc(n * sizeof(struct Node_Details));

    BFS(nodes, n, (int *)graph);

    free(nodes); // Free the dynamically allocated memory

    return 0;
}
