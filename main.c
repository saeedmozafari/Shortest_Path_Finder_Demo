#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "Defines.h"
#include "functions.h"

int main() {
    // initialize graph
    // Pattern: add_edge(node_number, node_number, edge_cost_btw_the_nodes)
    num_nodes = 5;
    add_edge(0, 1, 10);
    add_edge(0, 2, 5);
    add_edge(1, 3, 1);
    add_edge(2, 1, 3);
    add_edge(2, 3, 8);
    add_edge(2, 4, 2);
    add_edge(3, 4, 4);

    // find shortest path from node 0 to node 4
    int start = 0;
    int goal = 1;

    int shortest_path = dijkstra(start, goal);

    printf("Shortest path from node %d to node %d: %d\n", start, goal, shortest_path);
    getchar();
    //return 0;
}

