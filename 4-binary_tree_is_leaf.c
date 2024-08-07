#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Write a function that checks if a node is a leaf.
 * @node: The node you want to check if itÂs a lea.
 * Return: 0 if node ins NULL and 1 if node is a leaf.
 */
int binary_tree_is_leaf(const binary_tree_t *node)

{
	if (node == NULL)
	return (0);

	if (node->left == NULL &&  node->right == NULL)
		return (1);
	return (0);
}
