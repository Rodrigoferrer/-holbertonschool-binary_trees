#include "binary_trees.h"

/**
 * binary_tree_height2 - Function that measures the height of a binary tree
 * @tree: Pointer to tree
 * Return: size of tree
 */

int binary_tree_height2(const binary_tree_t *tree)
{
	int alt_i = 0, alt_d = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	alt_i = binary_tree_height2(tree->left);
	alt_d = binary_tree_height2(tree->right);
	if (alt_i < alt_d)
		return (1 + alt_d);
	else
		return (1 + alt_i);
}

/**
 * binary_tree_balance - calculates the balance of a binary tree
 * @tree: binary tree
 * Return: the difference of the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int alt_i, alt_d;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		alt_i = 0;
	else

		alt_i = binary_tree_height2(tree->left) + 1;
	if (tree->right == NULL)
		alt_d = 0;
	else
		alt_d = binary_tree_height2(tree->right) + 1;

	return (alt_i - alt_d);
}
