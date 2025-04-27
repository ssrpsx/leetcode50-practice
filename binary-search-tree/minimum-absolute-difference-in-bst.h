#include <iostream>
#include <limits.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        int minDiff = INT_MAX;
        int pre = -1;

        int getMinimumDifference(TreeNode* root) {
                inorder(root);
                return minDiff;
        }
    private:
        void inorder(TreeNode* root)
        {
            if(root == nullptr) return;

            inorder(root->left);

            if(pre != -1)
            {
                minDiff = min(minDiff, root->val - pre);
            }

            pre = root->val;

            inorder(root->right);
        }
};