/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void AddNodes(TreeNode* root,vector<int> &nodes){
        if(root==NULL){
            return ;
        }

        AddNodes(root->left,nodes);
        nodes.push_back(root->val);
        AddNodes(root->right,nodes);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> nodes;
        AddNodes(root,nodes);
        for(int i=1;i<nodes.size();i++){
            if(nodes[i]<=nodes[i-1]){
                return false;
            }
        }
        return true;
    }
};