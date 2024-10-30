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
    void ToArr(TreeNode* root,vector<int> &arr){
        if(root==NULL){
            return ;
        }

        ToArr(root->left,arr);
        arr.push_back(root->val);
        ToArr(root->right,arr);
    }
    bool findTarget(TreeNode* root, int target) {
        vector<int> arr;
        ToArr(root,arr);
        int i=0,j=arr.size()-1;
        int sum=0;
        while(i<j){
            sum=arr[i]+arr[j];
            if(sum == target){
                return true;
            }else if(sum>target){
                j--;
            }else{
                i++;
            }
            
        } return false;
    }
};