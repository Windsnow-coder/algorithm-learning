class Solution {
public:
    TreeNode* Build(vector<int>& preorder,vector<int>& inorder,int preleft,int preright,int inleft,int inright)
    {
        if(preleft>preright)return nullptr;

        TreeNode* root=new TreeNode(preorder[preleft]);

        int rootindex=inleft;
        while(inorder[rootindex]!=preorder[preleft])rootindex++;

        int leftsize=rootindex-inleft;
        root->left=Build(preorder,inorder,preleft+1,preleft+leftsize,inleft,rootindex-1);
        root->right=Build(preorder,inorder,preleft+leftsize+1,preright,rootindex+1,inright);

        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return Build(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
};