class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
       if(root==nullptr) return nullptr;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* cur=q.front();
            q.pop();
            
            TreeNode* temp;
            temp=cur->left;
            cur->left=cur->right;
            cur->right=temp;
            if(cur->left)
                q.push(cur->left);
            if(cur->right)
                q.push(cur->right);
        }
       return root;
    }
};