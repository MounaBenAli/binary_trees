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
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 *
 * @tree : pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *L_subtree = tree->left;
	binary_tree_t *R_subtree = tree->right;

	if (!tree && (!L_subtree || !R_subtree))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (_binary_tree_height(L_subtree) == _binary_tree_height(R_subtree))
	{
		if (binary_tree_is_perfect(L_subtree) && binary_tree_is_perfect(R_subtree))
			return (1);
	}
	return (0);
}

