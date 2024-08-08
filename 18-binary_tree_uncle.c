#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: a pointer to the node.
 * Return: A pointer to the uncle or null if its
 * not possible to find it.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *current;
	binary_tree_t *check;

	if (node == NULL)
		return (NULL);
	current = node;
	if (current->parent == NULL)
		return (NULL);
	current = current->parent;
	check = current;
	if (current->parent == NULL)
		return (NULL);
	current = current->parent;
	if (current->right == NULL)
		return (NULL);
	current = current->right;
	if (current->n == check->n)
	{
		current = current->parent;
		if (current->left == NULL)
			return (NULL);
		current = current->left;
	}
	return (current);
}
