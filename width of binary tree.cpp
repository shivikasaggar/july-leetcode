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
//  */
// int dfs(TreeNode*root,int id,int level,vector<int>&l){
//      if (root == NULL) return 0;
//      if (level >= l.size()) 
//          l.push_back(id); // add left most node
//               return max({id + 1 - l[level], dfs(root->left, id * 2, level + 1, l), dfs(root->right, id * 2 + 1, level+ 1, l)});
// }


//Given a binary tree, write a function to get the maximum width of the given tree.
//The width of a tree is the maximum width among all levels. The binary tree has the
// same structure as a full binary tree, but some nodes are null.
//The width of one level is defined as the length between the end-nodes
// (the leftmost and right most non-null nodes in the level, where the null nodes 
//between the end-nodes are also counted into the length calculation.
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        // vector<int>l;
        // return dfs(root,1,0,l);
        
	if (!root)return 0;
	queue<pair<TreeNode*, unsigned long long int>> que;
	que.push({root, 0});
	int width = 0;
	while (que.size() != 0) {
		unsigned long long int left = que.front().second, right = 0;
		int size = que.size();
		while (size-- > 0) {
			pair<TreeNode*, unsigned long long int> rNode = que.front();
			que.pop();
			right = rNode.second;
			if (rNode.first->left) {
				que.push({rNode.first->left, 2 * rNode.second + 1});
			}
			if (rNode.first->right) {
				que.push({rNode.first->right, 2 * rNode.second + 2});
			}
		}
		width = max(width, int(right - left + 1));
	}
	return width;
}
    
};
