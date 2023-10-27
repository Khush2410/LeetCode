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

    void tree1(TreeNode* p,vector<int> &v)
    {
        if(p == NULL)
        {
            v.push_back(0);
            return;
        }

        v.push_back(p->val);

        tree1(p->left,v);

        tree1(p->right,v);
    }

    void tree2(TreeNode* q,vector<int> &v1)
    {
        if(q == NULL)
        {
            v1.push_back(0);
            return;
        }

        v1.push_back(q->val);

        tree1(q->left,v1);

        tree1(q->right,v1);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v;
        vector<int> v1;

        tree1(p,v);
        tree2(q,v1);

        if(v == v1)
        return true;

        return false;
    }
};