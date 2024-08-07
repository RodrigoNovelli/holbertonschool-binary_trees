#include "binary_trees.h"
/**
 * binary_tree_preorder - Iterates every way of a binary tree.
 * @tree: The root of the binary tree.
 * @func : -
 * Retrun: void
**/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
