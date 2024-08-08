#include <stddef.h>

#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of a binary tree.
 * If tree is NULL, it return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_t *current_parent = tree->parent;
		size_t depth = 0;

		while (current_parent)
		{
			current_parent = current_parent->parent;
			depth++;
		}
		return (depth);
	}
	return (0);
}
