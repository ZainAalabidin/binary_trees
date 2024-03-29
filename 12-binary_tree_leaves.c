#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count leaves.
 *
 * Return: Number of leaf nodes, 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves = 0, r_leaves = 0;

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
		l_leaves = binary_tree_leaves(tree->left);
		r_leaves = binary_tree_leaves(tree->right);

		return (r_leaves + l_leaves);
	}
}
