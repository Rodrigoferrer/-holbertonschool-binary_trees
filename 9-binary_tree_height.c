#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to tree
 * Return: size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t alt_i = 0, alt_d = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	alt_i = binary_tree_height(tree->left);
	alt_d = binary_tree_height(tree->right);
	if (alt_i < alt_d)
		return (1 + alt_d);
	else
		return (1 + alt_i);
}
