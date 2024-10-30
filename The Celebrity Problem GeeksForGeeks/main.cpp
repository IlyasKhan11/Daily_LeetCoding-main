//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>>& mat) {
        int cols = mat[0].size();
        int rows = mat.size();
        
        stack<int> st;
        
        for (int i = rows - 1; i >= 0; i--) {
            st.push(i);
        }
        
        while (st.size() > 1) {
            int first = st.top();
            st.pop();
            
            int second = st.top();
            st.pop();
            
            if (mat[first][second] == 1 && mat[second][first] == 0) {
                st.push(second);
            } else if (mat[first][second] == 0 && mat[second][first] == 1) {
                st.push(first);
            }
        }
        
        if (st.empty()) {
            return -1;
        }
        
        int cele = st.top();
        st.pop();
        
        rows = 0;  
        int colsCount = 0; 
        
        for (int i = 0; i < cols; i++) {
            rows += mat[cele][i];  
            colsCount += mat[i][cele];  
        }
        
        return rows == 0 && colsCount == cols - 1 ? cele : -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends