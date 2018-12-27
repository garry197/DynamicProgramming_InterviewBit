/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
 int helper(TreeNode* A,int &ans)
 {
     if(A==NULL)
     return 0;
     
     int l=helper(A->left,ans);
     int r=helper(A->right,ans);
     
     
     int z=max(A->val,max(l,r)+A->val);
     
     int a=max(z,l+r+A->val);
     ans=max(a,ans);
     return z;
     
     
     
     
 }
 
 
int Solution::maxPathSum(TreeNode* A) {
    
    int ans=INT_MIN;
    
    int o=helper(A,ans);
    return ans;
}
