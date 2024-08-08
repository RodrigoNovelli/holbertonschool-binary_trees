                return (0);
        if (tree->right)
                counter = 1 + binary_tree_size(tree->right);
        if (tree->left)
                count = 1 + binary_tree_size(tree->left);
        return (counter + count - 1);
}
/**
 * binary-tree-is-perfect - Checks if a tree is perfect.
 * @tree: A pointer to the root.
 * Return: 1 if its perfect, 0 if its not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        int height;
        int nodest;
        int total;

        if (tree == NULL)
                return (0);
        total = binary_tree_size(tree);
        height = binary_tree_height(tree);

        for (nodest = 1; altura != 0; altura--)
        {
                nodest = nodest * 2;
        }
        if (nodest - 1 == total)
                return (1);
        else
                return (0);
}
