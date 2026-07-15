#include "Graph.h"

int main()
{
    GRAPH *g = (GRAPH *)malloc(sizeof(GRAPH));
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    GRAPH_init(g, arr, 5);

    addEdge(g, 'A', 'B');
    addEdge(g, 'A', 'C');
    addEdge(g, 'A', 'D');
    addEdge(g, 'A', 'E');

    addEdge(g, 'B', 'C');
    addEdge(g, 'B', 'E');

    addEdge(g, 'C', 'D');

    addEdge(g, 'D', 'E');
    addEdge(g, 'D', 'D');

    printGraph(g);
    return 0;
}
