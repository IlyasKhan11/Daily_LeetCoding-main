#include <iostream>
#include <vector>

using namespace std;


// undirected unwiedhted graph

int main() {
    int vertex, edges;

    cout << "Enter number of vertices and edges: ";
    cin >> vertex >> edges;

    // Validate input
    if (vertex <= 0 || edges < 0) {
        cout << "Number of vertices must be positive and edges must be non-negative." << endl;
        return 1;
    }

    // Initialize the adjacency matrix
    vector<vector<bool>> adjMat(vertex, vector<bool>(vertex, false));

    int u, v;
    cout << "Enter edges (u v): " << endl;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        
        // Validate the vertex indices
        if (u < 0 || u >= vertex || v < 0 || v >= vertex) {
            cout << "Vertex indices must be between 0 and " << vertex - 1 << "." << endl;
            return 1;
        }
        
        adjMat[u][v] = true; // Set the edge from u to v
        adjMat[v][u] = true; // Set the edge from v to u (undirected)
    }

    // Print the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
