#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 *
 * @tree : pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, return 0 ; a NULL pointer is not a leaf
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

	if (!tree || binary_tree_is_leaf(tree))
		return (count);

	if (tree)
	{
		count = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	return (1 + count);
}

/**
 * binary_tree_is_leaf -  checks if a node is a leaf
 *
 * @node : pointer to the node to check
 *
 * Return: 1 if success else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node != NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	else
		return (0);
}

