#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the non-leaf nodes in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count nodes.
 *
 * Return: Number of non-leaf nodes, 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r_tree, l_tree;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left || tree->right)
		{
			l_tree = binary_tree_nodes(tree->left);
			r_tree = binary_tree_nodes(tree->right);
			return (l_tree + r_tree + 1);
		}
		return (0);
	}
}
