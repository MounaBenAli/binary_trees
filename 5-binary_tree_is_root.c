#include "binary_trees.h"

/**
 * binary_tree_is_root -  checks if a given node is a root
 *
 * @node : pointer to the node to check
 *
 * Return: 1 if success else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (!node)
		return (0);

	if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}

	else
		return (0);
}
