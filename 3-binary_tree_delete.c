#include "binary_trees.h"
/**
 * binary_tree_delete - Delete the entire binary tree.
 *@tree: A pointer to the root of the tree
 *Return: Void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		exit(0);
	while (tree->left != NULL)
	{
		tree = tree->right;
		free(tree->right);
	}
	while (tree->left != NULL)
	{
		tree = tree->left;
		free(tree->left);
	}
	free(tree);
	exit(0);
}
