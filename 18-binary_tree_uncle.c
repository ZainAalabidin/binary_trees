#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the sibling of a node in a binary tree.
 *
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL ||
		node->parent->parent == NULL)
	{
		return (NULL);
	}
	else
	{
		if (node->parent == node->parent->parent->left)
		{
			return (node->parent->parent->right);
		}
		else
		{
			return (node->parent->parent->left);
		}
	}
}
