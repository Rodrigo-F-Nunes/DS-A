class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> sol;
        if(!root){return sol;}
        stack<TreeNode *> stck;
        TreeNode *curr = root;
        while(curr != NULL || !stck.empty()){
            while(curr != NULL){
                stck.push(curr);
                curr = curr -> left;
            }
            curr = stck.top();
            stck.pop();
            sol.push_back(curr -> val);
            curr = curr -> right;
        }
        return sol;
    }
};