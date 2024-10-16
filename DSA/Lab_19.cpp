#include<iostream> 
#include <list>
using namespace std;
// Graph class represents a undirected graph using adjacency list representation 
class Graph
{
      int V; // No. of vertices
     // Pointer to an array containing adjacency lists 
     list<int> *adj;
     // A function used by DFS
     void BFSUtil(int v, bool visited[]);

public:
  Graph(int V); // Constructor 
  void addEdge(int v, int w); 
  void connectedComponents();
};
 
// Method to print connected components in an undirected graph 
void Graph::connectedComponents()
{
    // Mark all the vertices as not visited 
    bool *visited = new bool[V];
    for(int v = 0; v < V; v++) 
    visited[v] = false;

    for (int v=0; v<V; v++)
    {
       if (visited[v] == false)
       {
           // print all reachable vertices from v 
           BFSUtil(v, visited);
           cout<< "\n";
       } 
   }
}
void Graph::BFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it 
    visited[v] = true;
    cout<< v << " ";
    // Recur for all the vertices adjacent to this vertex 
    list<int>::iterator i;
    for(i = adj[v].begin(); 
    i != adj[v].end(); 
    ++i) 
    if(!visited[*i])
    BFSUtil(*i, visited);
}
Graph::Graph(int V)
{
   this->V = V;
   adj = new list<int>[V];
}
// method to add an undirected edge 
void Graph::addEdge(int v, int w)
{
   adj[v].push_back(w); 
   adj[w].push_back(v);
}

int main()
{
// Create a graph given in the above diagram 
Graph g(5); // 5 vertices numbered from 0 to4 
g.addEdge(1,0);
g.addEdge(2,3);
g.addEdge(3,4);
cout<< "Following are connected components \n"; 
g.connectedComponents();

return 0;
}
