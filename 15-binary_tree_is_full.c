#include "binary_trees.h"

/**
 * full_binary_tree - Function that
 * @tree: pointer to tree;
 * Return: 
 */

int full_binary_tree(const binary_tree_t *tree)
{
        int count = 1;

	if (tree->left == NULL && tree->right == NULL)
		return (1);
        if ((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL))
        {
                count = 0;
        }
        count = binary_tree_is_full(tree->left);
        count = binary_tree_is_full(tree->right);
        return (count);                                                                                                                         } 

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to root
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int count2 = 0;

	if (tree == NULL)
		return (0);
	count2 = full_binary_tree(tree);
	if (count2 != 0)
		return (1);
	else
		return (0);
}
