#include "binary_trees.h"

/**
 * binary_tree_nodes - count the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;
	size_t N;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		n += 1;
	N = n + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (N);
}
