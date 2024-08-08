#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 *
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node.
 * If node is NULL or the parent is NULL, it returns NULL.
 * If node has no sibling, it returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (NULL);
		if (node->parent->left == node)
			return (node->parent->right);
		else if (node->parent->right == node)
			return (node->parent->left);
		return (NULL);
	}
	return (NULL);
}
