#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibiling of a node.
 * @node: a pointer to the node
 * Return: A pointer to the sibling, or NULL if it does
 * not exist
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current;
	binary_tree_t *check;

	if (node == NULL)
		return (NULL);
	current = node;
	check = node;
	if (current->parent == NULL)
		return (NULL);
	current = current->parent;
	if (current->left == NULL)
		return (NULL);
	current = current->left;
	if (current->n == check->n)
	{
		current = current->parent;
		if (current->right == NULL)
			return (NULL);
		current = current->right;
	}
	return (current);
}
