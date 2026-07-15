#include "Graph.h"

void GRAPH_init(GRAPH *graph, char *vertices, int vertexCount)
{
    graph->vertices = vertexCount;
    graph->edges = 0;
    graph->heads = (VERTEX *)malloc(sizeof(VERTEX) * vertexCount);

    for (int i = 0; i < vertexCount; i++)
    {
        graph->heads[i].name = vertices[i];
    }
}

VERTEX *createVertex(char name)
{
    VERTEX *newVertex = (VERTEX *)malloc(sizeof(VERTEX));
    newVertex->name = name;
    newVertex->next = NULL;
}

void GRAPH_printHeadList(GRAPH *graph)
{
    VERTEX *temp = graph->heads;
    for (int i = 0; i < graph->vertices; i++)
    {
        printf("%c\n", temp[i].name);
    }
}
