#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a tree is full.
 * @tree: a pointer to the node.
 * Return: 1 if its perfect, 0 if its not or if tree is null.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t counter = 0;
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		counter = 1 + binary_tree_is_full(tree->right);
	if (tree->left)
		count = 1 + binary_tree_is_full(tree->left);
	if (count == counter)
		return (1);
	else
		return (0);
}
