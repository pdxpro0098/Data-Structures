#include <stdio.h>
#include <stdlib.h>

typedef struct GRAPH
{
    int edges;
    int vertex;
    int **graph;
} GRAPH;

void GRAPH_init(GRAPH *g, int vertexCount);
void __addEdge(GRAPH *g, int src, int dest);
void addEdgeUnDirected(GRAPH *g, int src, int dest);
void addEdgeDirected(GRAPH *g, int src, int dest);
void printHeadList(GRAPH *g);
void printEdges(GRAPH *g, int vertex);
void printGraph(GRAPH *g);
void BFS(GRAPH *g);
void DFS(GRAPH *g);
int edgesCount(GRAPH *g);
int vertexCount(GRAPH *g);
