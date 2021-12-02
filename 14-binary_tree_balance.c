#include "binary_trees.h"

/**
 * tree_height - finds height of tree
 * @n_pointer: nodep pointer
 * Return: height
 */

int tree_height(const binary_tree_t *n_pointer)
{
	int left, right;

	if (n_pointer == NULL)
		return (0);

	left = tree_height(n_pointer->left);
	right = tree_height(n_pointer->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);

	count = tree_height(tree);

	return ((size_t)count);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 or balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_right, height_left;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (height_left - height_right);
}
