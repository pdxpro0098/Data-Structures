#include <stdio.h>
#include <stdlib.h>

typedef struct VERTEX
{
    char name;
    struct VERTEX *next;
} VERTEX;

typedef struct GRAPH
{
    int vertices;
    int edges;
    VERTEX *heads;
} GRAPH;

VERTEX *createVertex(char name);

void GRAPH_init(GRAPH *graph, char vertices[], int vertexCount);
void GRAPH_printHeadList(GRAPH *graph);

void addEdge();
