class Solution {
public:
    void solve(vector<int> &arr, int target, int index, int n, vector<vector<int>> &ans, vector<int> &temp) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < n; i++) {
            if (i > index && arr[i] == arr[i - 1]) continue;

            // If current element exceeds the target, break since the array is sorted
            if (arr[i] > target) break;

            // Include the current element
            temp.push_back(arr[i]);
            
            // Recurse with the remaining target and i+1 index
            solve(arr, target - arr[i], i + 1, n, ans, temp);
            
            // Backtrack
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();

        sort(candidates.begin(), candidates.end());

        solve(candidates, target, 0, n, ans, temp);
        return ans;
    }
};
