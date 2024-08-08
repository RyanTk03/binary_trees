#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: The number of nodes with at least 1 child in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_nodes = 0;
		size_t r_nodes = 0;

		if (!tree->left && !tree->right)
			return (0);

		l_nodes = binary_tree_nodes(tree->left);
		r_nodes = binary_tree_nodes(tree->right);

		return (1 + l_nodes + r_nodes);
	}
	return (0);
}
