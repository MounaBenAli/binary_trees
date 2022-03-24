#include "binary_trees.h"


/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node  : pointer to the node to find the sibling.
 *
 * Return: pointer to the sibling node ;if node or parent is NULL return NULL//
 *         if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !(node->parent))
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}

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
	binary_tree_t *uncle = binary_tree_sibling(node->parent);

	if (!node || !(node->parent))
		return (NULL);

	if (node)
		return (uncle);

	return (NULL);

}
