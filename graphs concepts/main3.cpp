#include<iostream>
#include<vector>
using namespace std;

// directed unweighted graph

int main() {
    cout << "Please type the number of graph nodes and edges: ";
    int vertex, edges;
    cin >> vertex >> edges;

    // Initialize adjacency matrix with 0 for no edge
    vector<vector<int>> adjMat(vertex, vector<int>(vertex, 0));

    int u, v;

    // Loop to input the edges
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adjMat[u][v] = 1;  // Mark the edge from u to v
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
