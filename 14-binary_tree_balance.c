#include <stddef.h>

#include "binary_trees.h"

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

		l_balance = binary_tree_balance(tree->left);
		r_balance = binary_tree_balance(tree->right);

		return (l_height - r_height);
	}
	return (0);
}
