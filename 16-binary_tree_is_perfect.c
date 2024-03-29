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
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_tree = 0, r_tree = 0, l_perf = 0, r_perf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

		l_tree = binary_tree_size(tree->left);
		r_tree = binary_tree_size(tree->right);
		l_perf = binary_tree_is_perfect(tree->left);
		r_perf = binary_tree_is_perfect(tree->right);

		if (l_tree == r_tree && l_perf && r_perf)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
