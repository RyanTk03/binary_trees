#include <stddef.h>

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of a binary tree.
 * If tree is NULL, it will return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = 0;
		size_t r_height = 0;

		if (binary_tree_is_leaf(tree))
			return (0);

		l_height = binary_tree_height(tree->left);
		r_height = binary_tree_height(tree->right);

		return (1 + (l_height > r_height ? l_height : r_height));
	}
	return (0);
}
