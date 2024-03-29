#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_tree, r_tree, size;
	l_tree = 1 + binary_tree_size(tree->left);
	r_tree = 1 + binary_tree_size(tree->right);
	size = l_tree + r_tree + 1;
	return (size);
}
