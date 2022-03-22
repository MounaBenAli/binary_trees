#include "binary_trees.h"

unsigned int max(unsigned int num1, unsigned int num2);

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree : pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree)
	{
		left_height = binary_tree_height(tree->left) + 1;
		right_height = binary_tree_height(tree->right) + 1;
		height =  max(left_height, right_height);
	}

	return (height);
}

/**
 * max - Finds maximum between two numbers.
 * @num1 : first number
 * @num2 : second number
 *
 * Return: max number
 */
unsigned int max(unsigned int num1, unsigned int num2)
{
	return ((num1 > num2) ? num1 : num2);
}
