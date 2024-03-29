#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_full = 0, r_full = 0;

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

		l_full = binary_tree_is_full(tree->left);
		r_full = binary_tree_is_full(tree->right);
		return (l_full && r_full);
	}
}
