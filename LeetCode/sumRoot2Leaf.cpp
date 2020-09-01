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
    int sumNumbers(TreeNode* root) {
        if(root==nullptr) return 0;
        int currVal=root->val;
        vector<int> sums;
        allPath(root,currVal,sums);
        for(int i=1;i<sums.size();i++)
        {
            sums[i]+=sums[i-1];
        }
        return sums[sums.size()-1];
    }
    
    void allPath(TreeNode* root,int value,vector<int> &sums)
    {
        if(root->left==nullptr && root->right==nullptr)
        {
           sums.push_back(value);
        }
         if(root->left!=nullptr)
         {
             allPath(root->left,value*10+(root->left->val),sums);
         }
         if(root->right!=nullptr)
         {
             allPath(root->right,value*10+(root->right->val),sums);
         }
         
    }
};

//refactored code

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if(root==nullptr) return 0;
        int currVal=root->val;
        int sum=0;
        allPath(root,currVal,sum);
        return sum;
    }
    
    void allPath(TreeNode* root,int value,int &sum)
    {
        if(root->left==nullptr && root->right==nullptr)
        {
           sum+=value;
        }
         if(root->left!=nullptr)
         {
             allPath(root->left,value*10+(root->left->val),sum);
         }
         if(root->right!=nullptr)
         {
             allPath(root->right,value*10+(root->right->val),sum);
         }
         
    }
};