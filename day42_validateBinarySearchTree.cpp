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
    private:
    bool validBST(TreeNode* root,long long int lowerBound, long long int upperBound){
        if(root == NULL) return true;
    
        if(root -> val > lowerBound && root -> val < upperBound){
            return validBST(root->left, lowerBound, root->val) && validBST(root->right, root->val, upperBound);
        }
        else{
            return false;
        }
        
    }
public:
    bool isValidBST(TreeNode* root) {
        long long int lowerBound = -4294967296 ;
        long long int upperBound = 4294967296;
        bool ans  = validBST(root, lowerBound, upperBound );
        return ans;
    }
};