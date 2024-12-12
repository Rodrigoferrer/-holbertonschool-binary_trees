#include "binary_trees.h"
/**
 * binary_tree_height2 - caluclates the height of a binary tree
 * @tree: given binary tree
 * Return: height of the binary tree
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
 * binary_tree_leaves2 - Function that counts the amount of leaves
 * @tree: Pointer to tree
 * Return: The amount of leaves
 */
int binary_tree_leaves2(const binary_tree_t *tree)
{
	int leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		leaf++;
	leaf += binary_tree_leaves2(tree->left);
	leaf += binary_tree_leaves2(tree->right);
	return (leaf);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: given binary tree
 * Return: 1 if
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int altura, leaves, a = 1, i;

	if (tree == NULL)
		return (0);
	altura = binary_tree_height2(tree);
	leaves = binary_tree_leaves2(tree);
	if (altura != 0)
	{
		for (i = 0; i < altura; i++)
		{
			a = a * 2;
		}
	}
	if (a == leaves)
		return (1);
	else
		return (0);
}

