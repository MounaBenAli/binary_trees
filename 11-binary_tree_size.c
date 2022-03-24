#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree : pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0, left_size = 0, right_size = 0;

	if (!tree)
		return (0);

	if (tree)
		{
		left_size  =  binary_tree_size(tree->left);
		right_size  =  binary_tree_size(tree->right);
		tree_size = (left_size + right_size) + 1;

		}
	return (tree_size);
}
