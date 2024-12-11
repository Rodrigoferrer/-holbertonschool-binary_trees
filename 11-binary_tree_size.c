#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to root
 * Return: Size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tsize = 0;

	if (tree == NULL)
		return (0);
	tsize++;
	tsize += binary_tree_size(tree->left);
	tsize += binary_tree_size(tree->right);
	return (tsize);
}
