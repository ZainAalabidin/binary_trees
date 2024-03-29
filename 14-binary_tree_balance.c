#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_tree = 0, r_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l_tree = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_tree = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	}
	return ((r_tree > l_tree) ? r_tree : l_tree);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree node.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Balance factor of the tree node, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_tree = 0, r_tree = 0, balance = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		r_tree = ((int)binary_tree_height(tree->right));
		l_tree = ((int)binary_tree_height(tree->left));
		balance = l_tree - r_tree;
	}
	return (balance);
}
