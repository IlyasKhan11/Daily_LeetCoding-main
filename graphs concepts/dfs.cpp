//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    void DFS(int node, const vector<vector<int>> &adj, vector<bool> &visited, vector<int> &ans) {
        visited[node] = 1;  
        ans.push_back(node); 

        for (int i = 0; i < adj[node].size(); i++) {
            int neighbor = adj[node][i];
            if (!visited[neighbor]) {  
                DFS(neighbor, adj, visited, ans);
            }
        }
        return ;
    }

  
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        vector<bool> visited(adj.size(),false);
        vector<int> ans;
        
        DFS(0,adj,visited,ans);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends