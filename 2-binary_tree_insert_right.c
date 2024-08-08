#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node to the right of its parent.
 * If a node already exists to the right, the existing node will be set at
 * the right child of the new node
 *
 * @parent: The parent of the new node.
 * @value: The new value of the node.
 *
 * Return: The new node created or NULL if an error occurs.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent)
	{
		binary_tree_t *bt = binary_tree_node(parent, value);

		if (!bt)
		{
			perror("Cannot create a new right node to the tree");
			return (NULL);
		}

		if (parent->right)
		{
			bt->right = parent->right;
			parent->right->parent = bt;
		}
		parent->right = bt;

		return (bt);
	}
	return (NULL);
}
