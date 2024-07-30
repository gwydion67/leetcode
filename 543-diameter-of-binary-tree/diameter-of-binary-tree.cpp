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

    int height(TreeNode* head,int &diameter){ // diameter is passed by ref.. function can only return one val.

        if(head == NULL ) return 0;
        int rightheight = height(head->right,diameter);
        int leftheight = height(head->left,diameter);

        int localDiameter =(rightheight + leftheight);

        diameter = max(diameter,localDiameter);

        return( 1 + max(rightheight, leftheight) );

    }

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;

        height(root, diameter);
        return diameter;
    }
};