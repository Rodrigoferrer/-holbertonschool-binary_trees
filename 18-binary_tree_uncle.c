#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of an node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right == NULL || node->parent->parent->left == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
