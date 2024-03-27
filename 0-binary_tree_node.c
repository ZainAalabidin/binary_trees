#include "binary_trees.h"
/**
 * binary_tree_node -  Create binary node
 * @parent: node parent
 * @value: value of node
 * Return: a pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;
    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
    {
        return NULL;
    }
    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    return (node);
}