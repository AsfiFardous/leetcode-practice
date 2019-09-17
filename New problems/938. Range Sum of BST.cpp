class Solution {
public:
   
       int ans;
      void dfs(TreeNode* node, int L, int R) {
        if (node != NULL) {
            if (L <= node->val && node->val <= R)
                ans += node->val;
            if (L < node->val)
                dfs(node->left, L, R);
            if (node->val < R)
                dfs(node->right, L, R);
        }
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        ans = 0;
        dfs(root, L, R);
        return ans;
    }
};
