#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node of the measure depth
 * Return: 0 or depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	/* Add depth value and move up tree till tree->parent is NULL */
	while (tree->parent != NULL)
	{
		depth += 1;
		tree = tree->parent;
	}

	return (depth);
}
