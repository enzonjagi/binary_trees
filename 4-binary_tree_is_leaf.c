#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node we're referring to
 * Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->right == NULL) && (node->left == NULL))
		return (1); /* Node is a leaf */

	return (0); /* Node is not a leaf */
}
