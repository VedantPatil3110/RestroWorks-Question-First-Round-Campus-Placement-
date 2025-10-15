    void inorder(TreeNode* root, vector<int>& v) {
        if (!root) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root, v);
        if(k-1>=v.size()){
            return -1;
        }
        return v[k - 1];
    }
};