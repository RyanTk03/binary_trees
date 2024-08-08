#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a new node to the left of its parent.
 * If a node already exists to the left, the existing node will be set at
 * the left child of the new node
 *
 * @parent: The parent of the new node.
 * @value: The new value of the node.
 *
 * Return: The new node created or NULL if an error occurs.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent)
	{
		binary_tree_t *bt = binary_tree_node(parent, value);

		if (!bt)
		{
			perror("Cannot create a new left node to the tree");
			return (NULL);
		}

		if (parent->left)
		{
			bt->left = parent->left;
			parent->left->parent = bt;
		}
		parent->left = bt;

		return (bt);
	}
	return (NULL);
}
