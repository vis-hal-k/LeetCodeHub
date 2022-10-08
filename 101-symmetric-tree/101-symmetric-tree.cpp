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
    bool helper(TreeNode* le , TreeNode* ri) {
        if(!le && !ri){ return true ; }
        else if((le && !ri)||(!le && ri)) { return false ; }
        else{
            if(le->val != ri->val) return false ;
        bool b1= helper(le->left , ri->right);
            bool b2 = helper(le->right, ri->left) ;
        return b1&&b2 ;
                
        }
    }
    bool isSymmetric(TreeNode* root) {    
         if(!root->left && !root->right  )
             return true ;
        bool b = helper(root->left , root->right) ;
        return b ;
    }
};