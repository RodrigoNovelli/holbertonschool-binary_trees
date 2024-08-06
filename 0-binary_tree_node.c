#include "binary_trees.h"
/**
 * binary_tree_node - This function crates a new
 * binary tree node.
 * @parent: The parent of the new node.
 * @value: The value that will be n.
 * Return: NULL if malloc fails, otherwise it will
 * return a pointer to de new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent == NULL)
	{
		new->parent = NULL;
		new->left = NULL;
		new->right = NULL;
		new->n = value;
		parent = new;
		return (new);
	}
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		new->n = value;
		return (new);
}
