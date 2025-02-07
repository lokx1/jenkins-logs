#include <stdio.h>
#include "p74.c" // Include the original file as the first line after system includes

int main() {
    int V = 4;
    struct Graph *graph = createGraph(V);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    DFS(graph, 2); // Perform depth-first search starting from vertex 2
    BFS(graph, 2); // Perform breadth-first search starting from vertex 2

    return 0;
}