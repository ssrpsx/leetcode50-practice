#include <vector>
#include <queue>
#include <iostream>
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
        vector<double> averageOfLevels(TreeNode* root) {
            vector<double> result;
            queue<TreeNode *> q;
            if(root == nullptr) return result;

            int level = 0;
            q.push(root);

            while (!q.empty()) {
                int size_level = q.size();
                int n = 0;
                double bucket = 0;

                for(int i = 0; i < size_level; i++)
                {
                    TreeNode* current = q.front();
                    q.pop();
                    
                    bucket += current->val;
                    n += 1;
                    if (current->left != nullptr) q.push(current->left);
                    if (current->right != nullptr) q.push(current->right);
                }
                result.push_back(bucket/n);
                cout << endl;
                level++;
            }
            
            return result;
        }
    };