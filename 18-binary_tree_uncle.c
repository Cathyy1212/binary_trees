#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a BT.
 * @node: A pointer to the node to find the uncle of.
 * Return: NULL if the node is NULL or has no uncle,
 *         A pointer to the uncle node in the other case.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

