#include "Graph.h"

int main()
{
    GRAPH *g = (GRAPH *)malloc(sizeof(GRAPH));
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    GRAPH_init(g, arr, 5);

    GRAPH_printHeadList(g);
    return 0;
}
