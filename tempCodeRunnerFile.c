#include<stdio.h>
#define V 3
#define INF 99999

void printSolution(int dist[][V]);// sollution matrix

void floydWarshall (int graph[][V]) {
    int dist[V][V], i, j, k;
 
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    } 
    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    printSolution(dist);
}
void printSolution(int dist[][V]) {
    printf ("Following matrix shows the shortest distances"
            " between every pair of vertices \n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf ("%7d", dist[i][j]);
        }
        printf("\n");
    }
} 
//main program
int main() {
    int graph[V][V] = { {0,   4,  11},
                        {6,   0,   2},
                        {3, INF,   0},
                      }; 
    // Print the solution
    floydWarshall(graph);
    return 0;
}
