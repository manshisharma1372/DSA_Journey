


void inorder(TreeNode* root,vector<int> &ans){
    if(root==NULL){
        return;
    }

    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    inorder(root,ans);
    return ans;
}