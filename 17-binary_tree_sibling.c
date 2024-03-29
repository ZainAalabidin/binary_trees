#include "binary_trees.h"
/**
 * node_l - Checks if a node is the left child of its parent.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is the left child, 0 otherwise.
 */

int node_l(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->left == NULL)
	{
		return (0);
	}
	return (node == node->parent->left);
}
/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 *
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: Pointer to the sibling node, or NULL if no sibling found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	else
	{
		if (node_l(node))
		{
			return (node->parent->right);
		}
		else
		{
			return (node->parent->left);
		}
	}
}
