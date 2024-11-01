class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if (root == nullptr) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int level = q.size();
            vector<int> temp;

            for (int i = 0; i < level; i++) {
                TreeNode* curr = q.front();
                q.pop();

                if (curr->left != nullptr) {
                    q.push(curr->left);
                }
                if (curr->right != nullptr) {
                    q.push(curr->right);
                }
                temp.push_back(curr->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
