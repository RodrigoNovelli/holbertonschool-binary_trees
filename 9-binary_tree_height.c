#include "binary_trees.h"
/**
 * binary_tree_height - Counts the height of a node.
 * @tree: a pointer to the node.
 * Return: The height, 0 if it fails.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0;
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL)
		counter = 1 + binary_tree_height(tree->right);
	else if (tree->left != NULL)
		count = 1 + binary_tree_height(tree->left);
	if (count < counter)
		return (counter);
	else
		return (count);
}
