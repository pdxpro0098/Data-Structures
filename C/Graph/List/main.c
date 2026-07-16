#include "Graph.h"

int main()
{
    GRAPH *g = (GRAPH *)malloc(sizeof(GRAPH));
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    GRAPH_init(g, arr, 5);

    addEdgeUnDirected(g, 'A', 'B');
    addEdgeUnDirected(g, 'A', 'C');
    addEdgeUnDirected(g, 'A', 'D');
    addEdgeUnDirected(g, 'A', 'E');

    addEdgeUnDirected(g, 'B', 'C');
    addEdgeUnDirected(g, 'B', 'E');

    addEdgeUnDirected(g, 'C', 'D');

    addEdgeUnDirected(g, 'D', 'E');
    addEdgeUnDirected(g, 'D', 'D');

    printGraph(g);
    return 0;
}
