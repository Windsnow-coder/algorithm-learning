class Solution {
public:
    int maxDepth(TreeNode* root) {
        //使用DFS解决
        if(root==nullptr)return 0;
        int leftDepth=maxDepth(root->left);
        int rightDepth=maxDepth(root->right);
        return max(leftDepth,rightDepth)+1;










        //使用BFS解决
        /*if(root==nullptr)return 0;
        int depth=0;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=nullptr)
                {
                    q.push(node->left);
                }
                if(node->right!=nullptr)
                {
                    q.push(node->right);
                }
            }
            depth++;
        }
        
        return depth;*/
    }
};