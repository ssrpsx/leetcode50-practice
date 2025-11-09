#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    unordered_map<int,int> inorderMap;
    int postIndex;

    TreeNode* build(vector<int>& postorder, int inStart, int inEnd) {
        if (inStart > inEnd) return nullptr;

        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);

        int inIndex = inorderMap[rootVal];

        root->right = build(postorder, inIndex + 1, inEnd);
        root->left = build(postorder, inStart, inIndex - 1);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        inorderMap.clear();
        postIndex = postorder.size() - 1;

        for (int i = 0; i < inorder.size(); ++i)
            inorderMap[inorder[i]] = i;

        return build(postorder, 0, inorder.size() - 1);
    }
};
