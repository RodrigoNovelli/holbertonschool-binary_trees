#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the amount of leaves in a tree.
 * @tree: a pointer to the node.
 * Return: The amount of leaves, 0 if tree is null.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		counter++;
	counter += binary_tree_leaves(tree->right);
	counter += binary_tree_leaves(tree->left);
	return (counter);
}
