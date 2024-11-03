#include<iostream>
#include<vector>
using namespace std;


//undirected weighted graph

int main() {
    cout << "Please type the number of graph nodes and edges: ";
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<int>> adjMat(vertex, vector<int>(vertex, -1));

    int u, v, weight;

    // Loop to input the edges and their weights
    for (int i = 0; i < edges; i++) {
        cin >> u >> v >> weight;
        adjMat[u][v] = weight;
        adjMat[v][u] = weight;
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
