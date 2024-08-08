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
	if (tree->right)
		counter = 1 + binary_tree_height(tree->right);
	if (tree->left)
		count = 1 + binary_tree_height(tree->left);
	if (count < counter)
		return (counter);
	else
		return (count);
}
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
