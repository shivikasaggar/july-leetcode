//Given two binary trees, write a function to check if they are the same or not.
//Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
     if (p == NULL && q == NULL)  
        return true;  
    if (p != NULL && q != NULL)  
    { 
        return
        (  
            p->val == q->val &&  
            isSameTree(p->left, q->left) &&  
            isSameTree(p->right, q->right)  
        );  
    }  
    return false;  
    }
};
