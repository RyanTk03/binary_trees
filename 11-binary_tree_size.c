#include <stddef.h>

#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of a binary tree.
 * If tree is NULL, it will return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_size = 0;
		size_t r_size = 0;

		if (!tree->right && !tree->left)
			return (1);

		l_size = binary_tree_size(tree->left);
		r_size = binary_tree_size(tree->right);

		return (1 + l_size + r_size);
	}
	return (0);
}
