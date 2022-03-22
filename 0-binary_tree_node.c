#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent : pointer to the parent node of the node to create
 * @value : value to put in the new node
 *
 * Return:  a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t  *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	if (new_node)
	{
		new_node->n= value;
		new_node->parent = parent;
		new_node->left = new_node->right = NULL;

	}

	return( new_node);
}
