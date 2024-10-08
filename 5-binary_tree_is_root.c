#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a root node, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
			return (0);
		else
			return (1);
	}
	return (0);
}
