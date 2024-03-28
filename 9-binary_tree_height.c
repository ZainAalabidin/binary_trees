#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_tree, r_tree;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l_tree = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_tree = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return ((r_tree > l_tree) ? r_tree : l_tree);
}
