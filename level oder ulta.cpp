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
 
 //Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> >v;
        if(root==NULL){
            return v;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>temp;
           for(int i=0;i<s;i++){
                TreeNode*c=q.front();
                q.pop();
                temp.push_back(c->val);
               
                if( c->left){
                    q.push(c->left);
                }
                if(c->right){
                    q.push(c->right);
                }
            }
            v.push_back(temp);
            temp.clear();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
