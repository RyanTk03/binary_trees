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
		size_t size = binary_tree_size(tree);
		size_t leaves = binary_tree_leaves(tree);

		return (size - leaves);
	}
	return (0);
}
