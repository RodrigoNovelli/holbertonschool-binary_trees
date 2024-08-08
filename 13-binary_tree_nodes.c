#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the amount of nodes that
 * has at least 1 child
 * @tree: a pointer to the node.
 * Return: The amount of nodes, 0 if tree is null.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		counter++;
	counter += binary_tree_nodes(tree->right);
	counter += binary_tree_nodes(tree->left);
	return (counter);
}
