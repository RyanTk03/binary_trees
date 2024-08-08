#include <stddef.h>

#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the leaves.
 *
 * Return: The number of leaves of a binary tree.
 * If tree is NULL, it will return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_leaves = 0;
		size_t r_leaves = 0;

		if (binary_tree_is_leaf(tree))
			return (1);

		l_leaves = binary_tree_leaves(tree->left);
		r_leaves = binary_tree_leaves(tree->right);

		return (l_leaves + r_leaves);
	}
	return (0);
}
