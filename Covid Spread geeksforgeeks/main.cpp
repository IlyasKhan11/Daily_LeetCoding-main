//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int helpaterp(vector<vector<int>> hospitals) {
        int r = hospitals.size();
        int c = hospitals[0].size();
        
        queue<pair<int, int>> q;
        
        // Push all initially infected positions into the queue
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) { // Use j for the inner loop
                if (hospitals[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        
        int timer = 0;
        while (!q.empty()) {
            int bound = q.size();
            bool infected = false; // Track if any new infection happens
            
            for (int i = 0; i < bound; i++) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                
                // Check all four directions
                // Up
                if (row - 1 >= 0 && hospitals[row - 1][col] == 1) {
                    hospitals[row - 1][col] = 2;
                    q.push({row - 1, col});
                    infected = true;
                }
                // Down
                if (row + 1 < r && hospitals[row + 1][col] == 1) {
                    hospitals[row + 1][col] = 2;
                    q.push({row + 1, col});
                    infected = true;
                }
                // Left
                if (col - 1 >= 0 && hospitals[row][col - 1] == 1) {
                    hospitals[row][col - 1] = 2;
                    q.push({row, col - 1});
                    infected = true;
                }
                // Right
                if (col + 1 < c && hospitals[row][col + 1] == 1) {
                    hospitals[row][col + 1] = 2;
                    q.push({row, col + 1});
                    infected = true;
                }
            }
            
            // Increment timer only if new infections occurred
            if (infected) timer++;
        }
        
        // Check if any healthy patients remain
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (hospitals[i][j] == 1) {
                    return -1; // Not all can be infected
                }
            }
        }
        
        return timer;
    }
};



//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        cin>>R>>C;
        vector<vector<int>> hospital;
        int i,j;
        for(i=0;i<R;i++)
         {   vector<int> temp;
             for(j=0;j<C;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            hospital.push_back(temp);
         }
        
        Solution ob;
        int ans = ob.helpaterp(hospital);
        cout << ans << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends