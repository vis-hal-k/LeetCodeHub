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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue <TreeNode*> q ;
        
        q.push(root);
        q.push(NULL) ;
        vector<vector<int>> ans ;
         vector<int> v ;
        if(root==NULL) {
           return ans ;
        }
         while(!q.empty()){   
            TreeNode* curr = q.front() ;
            q.pop() ;   
            if(curr==NULL) {
                  ans.push_back(v);
                  v.clear () ; 
               if(q.empty()) 
                 return ans ;
                q.push(NULL);     
                continue ;
            }
            // cout<<curr->val ;
            v.push_back(curr->val) ;
            if(curr->left) q.push(curr->left)   ;
            if(curr->right) q.push(curr->right) ;
            // if(!curr->left && !curr->right && ) 
        }
        return ans ;
    }
};