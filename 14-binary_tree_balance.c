#include "binary_trees.h"

/**
 * _binary_tree_height - measures the height of a binary tree
 *
 * @tree : pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, return 0
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	if (tree)
	{
		left_height = _binary_tree_height(tree->left);
		right_height = _binary_tree_height(tree->right);
	}
	if (left_height >= right_height)
		return (1 + left_height);
	return (1 + right_height);
}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 *
 * @tree : pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
