#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void add_edge(int src, int dest, int cost) {
    graph[src].edges[graph[src].num_edges].dest = dest;
    graph[src].edges[graph[src].num_edges].cost = cost;
    graph[src].num_edges++;
}


int dijkstra(int start, int goal) {
    int dist[MAX_NODES];
    int visited[MAX_NODES] = {0};

    for (int i = 0; i < num_nodes; i++) {
        dist[i] = INT_MAX;
    }

    dist[start] = 0;

    for (int i = 0; i < num_nodes - 1; i++) {
        int min_dist = INT_MAX;
        int min_node = -1;

        for (int j = 0; j < num_nodes; j++) {
            if (!visited[j] && dist[j] < min_dist) {
                min_dist = dist[j];
                min_node = j;
            }
        }

        if (min_node == -1) break;

        visited[min_node] = 1;

        for (int j = 0; j < graph[min_node].num_edges; j++) {
            Edge edge = graph[min_node].edges[j];
            if (dist[min_node] + edge.cost < dist[edge.dest]) {
                dist[edge.dest] = dist[min_node] + edge.cost;
            }
        }
    }

    return dist[goal];
}
#endif // FUNCTIONS_H_INCLUDED
