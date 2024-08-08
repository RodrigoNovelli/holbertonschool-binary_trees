#include "binary_trees.h"
/**
 * binary_tree_height - Counts the height of a node.
 * @tree: a pointer to the node.
 * Return: The height, 0 if it fails.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 1;
	size_t count = 1;

	if (tree == NULL)
		return (0);
	if (tree->right)
		counter = 1 + binary_tree_height(tree->right);
	if (tree->left)
		count = 1 + binary_tree_height(tree->left);
	if (count < counter)
		return (counter);
	else
		return (count);
}
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	return (left - right);
}
