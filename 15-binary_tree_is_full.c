#include "binary_trees.h"

/**
 * full - helper for below function
 * @tree: pointer to root
 * Return: 1 else 0
 */
int full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		return (full(tree->left) && full(tree->right));
	return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (full(tree));
}
