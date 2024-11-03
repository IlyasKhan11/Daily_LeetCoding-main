#include<iostream>
#include<vector>
using namespace std;

// directed weighted graph 

int main() {
    cout << "Please type the number of graph nodes and edges: ";
    int vertex, edges;
    cin >> vertex >> edges;

    // Initialize adjacency matrix with 0 for no edge
    vector<vector<int>> adjMat(vertex, vector<int>(vertex, 0));

    int u, v,w;

    // Loop to input the edges
    for (int i = 0; i < edges; i++) {
        cin >> u >> v >> w;
        adjMat[u][v] = w;  // Mark the edge from u to v
    }

    // Print the adjacency matrix
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
