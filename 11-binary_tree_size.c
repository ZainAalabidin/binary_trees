#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The size of the tree, 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_tree = 0, r_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l_tree = binary_tree_size(tree->left);
		r_tree = binary_tree_size(tree->right);
		return (l_tree + r_tree + 1);
	}
}
