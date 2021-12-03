#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the said node
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL ||
		node->parent->parent->right == NULL ||
	    node->parent->parent->left == NULL)
		return (NULL);
	if (node->parent->n == node->parent->parent->right->n)
		return (node->parent->parent->left);

	return (node->parent->parent->right);

}
