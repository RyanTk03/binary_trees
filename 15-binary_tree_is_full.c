#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is full and 0 otherwise.
 * If tree is NULL, it will return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		int l_check = 0;
		int r_check = 0;

		if ((tree->left && !tree->right) ||
		(!tree->left && tree->right))
			return (0);
		else if (!tree->left && !tree->right)
			return (1);

		l_check = binary_tree_is_full(tree->left);
		r_check = binary_tree_is_full(tree->right);

		if (l_check && r_check)
			return (1);
		return (0);
	}

	return (0);
}
