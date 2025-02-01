Your C function seems to be a complete program already. However, I can provide a few more test cases to test the functionality of your graph representation and DFS, BFS operations.

Here are a few test cases:

```C
int main() {
    // Test Case 1: Graph with 4 vertices
    {
        int V = 4;
        struct Graph* graph = createGraph(V);
        addEdge(graph, 0, 1);
        addEdge(graph, 0, 2);
        addEdge(graph, 1, 2);
        addEdge(graph, 2, 3);

        DFS(graph, 2);
        BFS(graph, 2);
    }

    // Test Case 2: Graph with 5 vertices
    {
        int V = 5;
        struct Graph* graph = createGraph(V);
        addEdge(graph, 0, 1);
        addEdge(graph, 0, 4);
        addEdge(graph, 1, 2);
        addEdge(graph, 1, 3);
        addEdge(graph, 1, 4);
        addEdge(graph, 2, 3);
        addEdge(graph, 3, 4);

        DFS(graph, 0);
        BFS(graph, 0);
    }

    // Test Case 3: Graph with 3 vertices and no edges
    {
        int V = 3;
        struct Graph* graph = createGraph(V);

        DFS(graph, 1);
        BFS(graph, 1);
    }

    return 0;
}
