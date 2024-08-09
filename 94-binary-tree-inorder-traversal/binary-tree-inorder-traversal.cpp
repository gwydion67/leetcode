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

    void inorder(TreeNode * root, vector<int> &ans){

        if(root == NULL){
            return;
        }

        inorder(root->left, ans);
        ans.push_back(root -> val);
        inorder(root->right,ans);
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;
        inorder(root,ans);
        return ans;

//        vector<int> ans;
//    
//       if( root == NULL){
//        return ans;
//       }
//
//       TreeNode *current, *pre;
//
//       current = root;
//
//       while(current != NULL){
//        
//        if(current->left == NULL){
//            ans.push_back(current->val);
//            current = current->right;
//        }else{
//
//            pre = current->left;
//            while(pre->right != NULL && pre-> right != current){
//                pre = pre -> right;
//            }
//            if(pre->right == NULL){
//                pre->right = current;
//                current = current->left;
//            }else{
//                pre->right = NULL;
//                ans.push_back(current->val);
//                current = current->right;
//            }
//
//        }
//       }
//
//       return ans;

        
        
    }
};