#include "binary_trees.h"
/**
 * binary_tree_delete - Delete the entire binary tree.
 *@tree: A pointer to the root of the tree
 *Return: Void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
