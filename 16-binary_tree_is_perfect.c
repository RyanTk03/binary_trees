#include "binary_trees.h"

/**
 * __binary_tree_is_full_height - measures the height of a binary tree's node
 * if it is full
 *
 * @node: The tree node to measure de height
 *
 * Return: The height of the tree. If the tree is not full, 0.
 */
size_t __binary_tree_is_full_height(const binary_tree_t *node)
{
	if (node)
	{
		size_t l_height = 0;
		size_t r_height = 0;

		if ((node->left && !node->right) ||
		(!node->left && node->right))
			return (0);
		if (!node->left && !node->right)
			return (1);

		l_height = __binary_tree_is_full_height(node->left);
		r_height = __binary_tree_is_full_height(node->right);
		if (l_height == 0 || r_height == 0 || l_height != r_height)
			return (0);

		return (1 + l_height);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if it is perfect and 0 otherwise.
 * If tree is NULL, it will return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height = __binary_tree_is_full_height(tree->left);
	size_t r_height = __binary_tree_is_full_height(tree->right);

	return (l_height == r_height && l_height != 0);
}
