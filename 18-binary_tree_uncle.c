#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 *
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node.
 * If node is NULL, it returns NULL.
 * If node has no uncle, it returns NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent || !node->parent->parent)
			return (NULL);
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		return (NULL);
	}
	return (NULL);
}
