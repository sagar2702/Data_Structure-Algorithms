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
    int countNodes(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==nullptr) return 0;
        q.push(root);
        int count=1;
        while(!q.empty())
        {
            TreeNode *cur=q.front();
            if(cur->left!=nullptr)
            {
                q.push(cur->left);
                count++;
            }
            if(cur->right!=nullptr)
            {
                q.push(cur->right);
                count++;
            }
            q.pop();
        }
        return count;
    }
};