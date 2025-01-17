#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that goes through
 * a binary tree using inorder
 * @tree: Pointer to root node
 * @func: is a pointer to a function to call for each node.
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, *func);
	func(tree->n);
	binary_tree_inorder(tree->right, *func);
}
