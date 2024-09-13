#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node_Details
{
    char color[10];
};

void DFS_visit(struct Node_Details *a, int u, int **graph, int n)
{
    strcpy(a[u].color, "GRAY");
    printf("Node %d visited\n", u);
    for (int i = 0; i < n; i++)
    {
        if (graph[u][i] && strcmp(a[i].color, "WHITE") == 0)
        {
            DFS_visit(a, i, graph, n);
        }
    }
    strcpy(a[u].color, "BLACK");
}

void DFS(struct Node_Details *a, int **graph, int n, int start_node)
{
    for (int i = 0; i < n; i++)
    {
        strcpy(a[i].color, "WHITE");
    }

    DFS_visit(a, start_node, graph, n);
}

int main()
{
    int n = 5;          // Assuming 5 nodes
    int start_node = 0; // Assuming the start node is 0

    // Example of an adjacency matrix for the graph
    int **graph = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        graph[i] = (int *)malloc(n * sizeof(int));
    }

    // Filling the example graph
    int adj[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = adj[i][j];
        }
    }

    struct Node_Details *nodes = (struct Node_Details *)malloc(n * sizeof(struct Node_Details));

    DFS(nodes, graph, n, start_node);

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++)
    {
        free(graph[i]);
    }
    free(graph);
    free(nodes);

    return 0;
}
