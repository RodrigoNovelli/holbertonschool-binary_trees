#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: The node you want to check.
 * Return: 1 if its a root otherwise it will return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
