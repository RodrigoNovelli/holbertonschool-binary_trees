#include "binary_trees.h"
/**
 * binary_tree_postorder - Iterates every way of a binary tree.
 * @tree: The root of the binary tree.
 * @func : -
 * Retrun: void
**/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
