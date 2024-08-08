#include "binary_trees.h"
/**
 * binary_tree_height - Counts the height of a node.
 * @tree: a pointer to the node.
 * Return: The height, 0 if it fails.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int counter = 0;
	int count = 0;
	const binary_tree_t *copyr;
	const binary_tree_t *copyl;

	if (tree == NULL)
		return (0);
	copyr = tree;
	while (copyr->right != NULL)
	{
		counter++;
		copyr = copyr->right;
		binary_tree_height(copyr);
	}
	copyl = tree;
	while (copyl->left != NULL)
	{
		count++;
		copyl = copyl->left;
		binary_tree_height(copyl);
	}
	if (counter > count)
		return (counter);
	if (count > counter)
		return (count);
	return (counter);
}
