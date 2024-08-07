#include "binary_trees.h"
/**
 * binary_tree_insert_left - Creates a new node an insert
 * it as a left child of parent given.
 * @parent: new childs parent.
 * @value: the n value of the new left child.
 * Return: NULL on failure. Pointer to left child
 * on succes
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *current;
	binary_tree_t *leftch;

	if (parent == NULL)
		return (NULL);
	current = parent;
	leftch = malloc(sizeof(binary_tree_t));
	if (leftch == NULL)
		return (NULL);
	leftch->n = value;
	leftch->parent = current;
	if (current->left != NULL)
	{
		leftch->left = current->left;
		current->left->parent = leftch;
	}
	else
		leftch->left = NULL;
	leftch->right = NULL;
	current->left = leftch;
	return (leftch);
}
