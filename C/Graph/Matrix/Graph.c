#include "Graph.h"

void GRAPH_init(GRAPH *g, int vertexCount)
{
    g->edges = 0;
    g->vertices = vertexCount;

    g->graph = (int **)calloc(vertexCount, sizeof(int *));
    for (int i = 0; i < vertexCount; i++)
    {
        g->graph[i] = (int *)calloc(vertexCount, sizeof(int));
    }
}

void __addEdge(GRAPH *g, int src, int dest)
{
    g->graph[src][dest] = 1;
    g->graph[dest][src] = 1;
}

void addEdgeUnDirected(GRAPH *g, int src, int dest)
{
}

void addEdgeDirected(GRAPH *g, int src, int dest)
{
}

void printHeadList(GRAPH *graph)
{
}

void printEdges(GRAPH *g, int vertex)
{
}

void printGraph(GRAPH *g)
{
    for (int i = 0; i < g->vertices; i++)
    {
        for (int j = 0; j < g->vertices; j++)
        {
            printf("%d ", g->graph[i][j]);
        }
        printf("\n");
    }
}

void BFS(GRAPH *g)
{
}

void DFS(GRAPH *g)
{
}

int edgesCount(GRAPH *g)
{
    return g->edges;
}

int vertexCount(GRAPH *g)
{
    return g->vertices;
}
