难度简单354收藏分享切换为英文关注反馈给定一个二叉树，找到最长的路径，这个路径中的每个节点具有相同值。 这条路径可以经过也可以不经过根节点。

注意：两个节点之间的路径长度由它们之间的边数表示。

示例 1:

输入:
              5
             / \
            4   5
           / \   \
          1   1   5

输出:

2
示例 2:

输入:
              1
             / \
            4   5
           / \   \
          4   4   5

输出:

2

注意: 给定的二叉树不超过10000个结点。 树的高度不超过1000。

int getMax(int a, int b)
{
    if (a > b) {
        return a;
    }
    return b;
}

int getArrowLength(struct TreeNode* node, int* diagmeter) 
{
    if (node == NULL) {
        return 0;
    }

    int left = getArrowLength(node->left, diagmeter);
    int right = getArrowLength(node->right, diagmeter);

    int ArrowLeft = 0;
    int ArrowRight = 0;
    if ((node->left != NULL) && (node->val == node->left->val)) {
        ArrowLeft = 1 + left;
    }
    if ((node->right != NULL) && (node->val == node->right->val)) {
        ArrowRight = 1 + right;
    }

    *diagmeter = getMax(*diagmeter, ArrowLeft + ArrowRight);
    return getMax(ArrowLeft, ArrowRight);
}

int longestUnivaluePath(struct TreeNode* root) {
    int diagmeter = 0;
    getArrowLength(root, &diagmeter);
    return diagmeter;
}
