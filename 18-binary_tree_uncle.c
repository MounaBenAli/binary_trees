#include "binary_trees.h"


/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node  : pointer to the node to find the uncle.
 *
 * Return: pointer to the uncle node ;if node is NULL return NULL//
 *         if node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);

	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (node->parent->parent->right);

}