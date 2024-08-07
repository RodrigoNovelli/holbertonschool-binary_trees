#include "binary_trees.h"

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
{
	 if (!tree || !func)
                return;
        func(tree->n);
        binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
