#include <stddef.h>

#include "binary_trees.h"

/**
 * __binary_tree_height - measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of a binary tree.
 * If tree is NULL, it will return 0.
 */
size_t __binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = 0;
		size_t r_height = 0;

		if (!tree->left && !tree->right)
			return (0);

		l_height = binary_tree_height(tree->left);
		r_height = binary_tree_height(tree->right);

		return (1 + (l_height > r_height ? l_height : r_height));
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of a binary tree.
 * If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = 0;
		size_t r_height = 0;

		if (!tree->left && !tree->right)
			return (0);

		l_height = __binary_tree_height(tree->left);
		r_height = __binary_tree_height(tree->right);

		return (l_height - r_height);
	}
	return (0);
}
