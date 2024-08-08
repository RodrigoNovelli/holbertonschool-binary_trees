#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a given node.
 * @tree: The node you wanna measure its depth.
 * Return: The node's depth or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		counter++;
		tree = tree->parent;
	}
	return (counter);
}
