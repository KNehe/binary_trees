#include "binary_trees.h"

/**
 * nodes - counts node aith at least 1 child
 * @tree: pointer to root
 * Return: sum of nodes
 */
size_t nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right || tree->left)
		return ((nodes(tree->right) + nodes(tree->left)) + 1);
	return (nodes(tree->right) + nodes(tree->left));
}


/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of node else 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (nodes(tree));
}
