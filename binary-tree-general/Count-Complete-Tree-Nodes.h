struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;

        int l = check_left_height(root);
        int r = check_right_height(root);

        if(l == r)
            return (1 << l) - 1;

        return countNodes(root->left) + countNodes(root->right) + 1;
    }

    int check_left_height(TreeNode *root)
    {
        int h = 0;
        while (root)
        {
            h++;
            root = root->left;
        }
        return h;
    }

    int check_right_height(TreeNode *root)
    {
        int h = 0;
        while (root)
        {
            h++;
            root = root->right;
        }
        return h;
    }
};