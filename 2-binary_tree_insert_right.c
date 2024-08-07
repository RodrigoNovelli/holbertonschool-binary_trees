#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates a new node an insert
 * it as a right child of parent given.
 * @parent: new childs parent.
 * @value: the n value of the new right child.
 * Return: NULL on failure. Pointer to right child
 * on succes
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current;
	binary_tree_t *rightch;

	current = parent;
	rightch = binary_tree_node(current, value);
	if (rightch == NULL)
		return (NULL);
	if (current->right != NULL)
	{
		rightch->right = current->right;
		current->right->parent = rightch;
	}
	else
		rightch->right = NULL;
	current->right = rightch;
	return (rightch);
}
