#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes minus the leaves
 * @tree: Pointer to root
 * Return: Number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count++;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
