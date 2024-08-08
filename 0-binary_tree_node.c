#include <stdio.h>
#include <stdlib.h>

#include "binary_trees.h"

/**
 * binary_tree_node - create a new tree node.
 *
 * @parent: The parent of the new node.
 * @value: The new value of the node.
 *
 * Return: The new node created or NULL if an error occurs.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = malloc(sizeof(binary_tree_t));

	if (!bt)
	{
		perror("Error while allocating memory for the binary tree");
		return (NULL);
	}

	bt->left = NULL;
	bt->right = NULL;
	bt->parent = parent;
	bt->n = value;

	return (bt);
}
