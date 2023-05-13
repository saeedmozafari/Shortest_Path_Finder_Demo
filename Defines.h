#ifndef DEFINES_H_INCLUDED
#define DEFINES_H_INCLUDED

#define MAX_NODES 1000

typedef struct {
    int dest;
    int cost;
} Edge;

typedef struct {
    Edge edges[MAX_NODES];
    int num_edges;
} Node;

Node graph[MAX_NODES];
int num_nodes;
#endif // DEFINES_H_INCLUDED
