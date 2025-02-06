#include "p74.c"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    // Test createGraph function
    struct Graph *graph = createGraph(5);
    assert(graph != NULL && graph->V == 5 && graph->array != NULL);
    free(graph);

    // Test addEdge function
    graph = createGraph(3);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    assert(graph->array[0].head != NULL && graph->array[0].head->dest == 1 && graph->array[0].head->next != NULL && graph->array[0].head->next->dest == 2);
    free(graph);

    // Test DFS function
    graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    DFS(graph, 0);
    assert(graph->array[0].head != NULL && graph->array[0].head->dest == 1 && graph->array[0].head->next != NULL && graph->array[0].head->next->dest == 2);
    free(graph);

    // Test BFS function
    graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    BFS(graph, 0);
    assert(graph->array[0].head != NULL && graph->array[0].head->dest == 1 && graph->array[0].head->next != NULL && graph->array[0].head->next->dest == 2);
    free(graph);

    return 0;
}