#include "binary_trees.h"
/**
 * binary_tree_balance - Checks the balance of a binary tree
 * @tree: Root of the tree.
 * Return: +2 both childs, -1 only one child, 0 if any.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (+0);
	if (tree->right == NULL || tree->left == NULL)
		return (-1);
	else
		return (+2);
}
