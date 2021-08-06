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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        set<int> s;
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                TreeNode* temp=q.front();
                q.pop();
                s.insert(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        if(s.size()==1)
            return true;
        return false;
    }
};