# Workspace

PRIMS ALGORITHM: 

GENERALLY,Prim's and Kruskal's algorithms are designed to find the Minimum Spanning Tree (MST) in an undirected graph. 
An MST is a subgraph of an undirected graph that connects all the vertices in the graph with the minimum possible total edge weight. 
These algorithms work by adding edges to the MST one by one, maintaining the property that the tree remains connected and acyclic.

In a directed graph, the edges have a direction and it is possible for there to be multiple paths between two vertices. 
A directed graph can contain cycles and it is not guaranteed that there exists a tree that connects all vertices in the graph. 
Therefore, the concept of an MST does not apply to directed graphs and Prim's and Kruskal's algorithms cannot be used to find an MST in a directed graph.


even though the prims algorithm doesnt satisfy directed graphs for this question it visits all the nodes and satisfies the prims equation 
total cost = 1+2+3+2=8
total cost=8

KRUSKAL'S ALGORITHM:

Kruskal's algorithm is a greedy algorithm for finding the Minimum Spanning Tree (MST) in an  graph. 
The algorithm starts with an empty MST and iteratively adds edges to the MST, until all the vertices in the graph are connected. 
The edges are added in increasing order of weight, and only those edges are considered for addition that do not form a cycle in the current MST.


EVENTHOUGH IT DOESNT SATISFY SINCE IT DIRECTED GRAPH AND ALSO NEGATIVE VALUE IN  ,
directed graph, the edges have a direction and it is possible for there to be multiple paths between two vertices. 
A directed graph can contain cycles and it is not guaranteed that there exists a tree that connects all vertices in the graph. 
Therefore, the concept of an MST does not apply to directed graphs and Kruskal's algorithm cannot be used to find an MST in a directed graph.



DIJIKSTRA ALGORITHM:

ITS NOT POSSIBLE FOR THIS DIRECTED GRAPH

Dijkstra's algorithm is a single-source shortest path algorithm that is typically used to find the shortest path from one vertex to all other 
vertices in an undirected or directed graph with non-negative edge weights.

CONCLUSION:

PRIM'S ALGORITHM IS SATISFIED.
KRUSKAL'S ALGOROTHM GIVE ZERO A OUTPUT.
DIJIKSTRA ALGORITHM GIVE INVALID OUTPUT.
