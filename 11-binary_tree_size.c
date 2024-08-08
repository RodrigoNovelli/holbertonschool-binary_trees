#include "binary_trees.h"
/**
 * binary_tree_size - Counts the amount of nodes in a binary tree.
 * @tree: The root.
 * Return: The amount of nodes or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 1;
	size_t count = 1;

	if (tree == NULL)
		return (0);
	if (tree->right)
		counter = 1 + binary_tree_size(tree->right);
	if (tree->left)
		count = 1 + binary_tree_size(tree->left);
	return (counter + count - 1);
}
