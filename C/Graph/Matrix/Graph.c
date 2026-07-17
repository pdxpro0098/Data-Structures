#include "Graph.h"

void GRAPH_init(GRAPH *graph, int vertexCount)
{
    graph->edges = 0;
    graph->vertex = vertexCount;

    graph->graph = (int **)malloc(sizeof(int *) * vertexCount);
    for (int i = 0; i < vertexCount; i++)
    {
        graph->graph[i] = (int *)malloc(sizeof(int) * vertexCount);
    }

    for (int i = 0; i < vertexCount; i++)
    {
        for (int j = 0; j < vertexCount; j++)
        {
            graph->graph[i][j] = 99;
        }
    }
}

void __addEdge(GRAPH *g, int src, int dest)
{
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
    return g->vertex;
}
