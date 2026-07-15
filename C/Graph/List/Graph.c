#include "Graph.h"

void GRAPH_init(GRAPH *graph, char *vertices, int vertexCount)
{
    graph->vertices = vertexCount;
    graph->edges = 0;
    graph->heads = (VERTEX *)malloc(sizeof(VERTEX) * vertexCount);

    for (int i = 0; i < vertexCount; i++)
    {
        graph->heads[i].name = vertices[i];
        graph->heads[i].next = NULL;
    }
}

VERTEX *createVertex(char name)
{
    VERTEX *newVertex = (VERTEX *)malloc(sizeof(VERTEX));
    newVertex->name = name;
    newVertex->next = NULL;
    return newVertex;
}

void printHeadList(GRAPH *graph)
{
    VERTEX *temp = graph->heads;
    for (int i = 0; i < graph->vertices; i++)
    {
        printf("%c\n", temp[i].name);
    }
}

void __addEdge(GRAPH *g, char src, char dest)
{
    VERTEX *newVertex = createVertex(dest);
    VERTEX *temp = NULL;

    for (int i = 0; i < g->vertices; i++)
    {
        if (g->heads[i].name == src)
        {
            temp = &g->heads[i];
        }
    }

    if (temp == NULL)
    {
        printf("Vertex not preset in Graph");
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
        if (temp->name == dest)
        {
            return;
        }
    }

    temp->next = newVertex;
    g->edges++;
}

void addEdge(GRAPH *g, char src, char dest)
{
    __addEdge(g, src, dest);
    __addEdge(g, dest, src);
}

void printEdges(GRAPH *g, char vertex)
{
    VERTEX *temp = NULL;
    for (int i = 0; i < g->vertices; i++)
    {
        if (g->heads[i].name == vertex)
        {
            temp = &g->heads[i];
        }
    }

    if (temp != NULL)
    {
        printf("Edges of %c = ", vertex);
        temp = temp->next;

        while (temp != NULL)
        {
            printf("%c->", temp->name);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    else
    {
        printf("vertex not present in graph");
        return;
    }
}

void printGraph(GRAPH *g)
{
    for (int i = 0; i < g->vertices; i++)
    {
        printEdges(g, g->heads[i].name);
    }
}

int edgesCount(GRAPH *g)
{
    return g->edges;
}

int vertexCount(GRAPH *g)
{
    g->vertices;
}