#include "binary_trees.h"
/**
 * binary_tree_balance - Checks the balance of a binary tree
 * @tree: Root of the tree.
 * Return: +2 both childs, -1 only one child, 0 if any.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int counter = 0;
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		counter = 1 + binary_tree_balance(tree->right);
	if (tree->left)
		count = 1 + binary_tree_balance(tree->left);
	return (count - counter);
}
