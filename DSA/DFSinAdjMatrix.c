// Represent a graph using an adjacency matrix and perform DFS traversal starting from a given vertex.
// Concepts: recursion, graph representation.

#include <stdio.h>

#define MAX 10  // maximum number of vertices

int adj[MAX][MAX];  // adjacency matrix
int visited[MAX];   // visited array
int n;              // number of vertices

// Recursive DFS function
void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);  // print visited vertex

    for (int i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int edges, v1, v2, start;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    // Initialize adjacency matrix and visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (v1 v2):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &v1, &v2);
        adj[v1][v2] = 1;
        adj[v2][v1] = 1;  // for undirected graph
    }

    printf("Enter starting vertex for DFS: ");
    scanf("%d", &start);

    printf("\nDFS Traversal starting from vertex %d:\n", start);
    DFS(start);

    printf("\n");

    return 0;
}
