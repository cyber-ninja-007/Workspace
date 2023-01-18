//Prim's algorithm C code for directed graph 

#include<stdio.h>
int a, b, u, v, n, i, j, ne = 1;
int visited[10] = {0}, min, mincost = 0, cost[10][10];

//main functions wiht the input of the matrix and nodes of the tree

void main() {
  printf("\nno.s  nodes:");
  scanf("%d", & n);
  printf("\nEnter the adjacency matrix:\n");
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      scanf("%d", & cost[i][j]);
      if (cost[i][j] == 0)
        cost[i][j] = 999;
    }
  }
  visited[1] = 1;
  printf("\n");
  while (ne < n) {
    for (i = 1, min = 999; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        if (cost[i][j] < min) {
          if (visited[i] != 0) {
            min = cost[i][j];
            a = u = i;
            b = v = j;
          }
        }
      }
    }
    if (visited[u] == 0 || visited[v] == 0) {
      printf("\nEdge %d:(%d %d), Cost = %d", ne++, a, b, min);
      mincost += min;
      visited[b] = 1;
    }
    cost[a][b] = cost[b][a] = 999;
  }
  printf("\n\nMinimum cost=%d", mincost);
}


/*
input:
no.s  nodes:5
Enter the adjacency matrix:
0 4 2 0 0
0 0 3 2 3
0 1 0 4 5
0 0 0 0 0
0 0 0 -5 0

output:
Edge 1:(1 3), Cost = 2
Edge 2:(3 2), Cost = 1
Edge 3:(2 4), Cost = 2
Edge 4:(2 5), Cost = 3

Minimum cost=8
*/
