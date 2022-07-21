#include "binary_trees.h"

/**
 * max - function to return the maximum between two numbers
 * @n1: first number
 * @n2: second number
 * Return: the max between them
 */
size_t max(size_t n1, size_t n2)
{
	return(n1 > n2 ? n1 : n2);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of tree, or 0 id tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(binary_tree_height(tree->left), binary_tree_height(tree->right)));
}

/**
 *  * binary_tree_size - function that measures the size of a binary tree
 *   * @tree: pointer to the root node of the tree to measure the size
 *    * Return: size of the tree, or 0 if tree is NULL
 *     */
size_t binary_tree_size(const binary_tree_t *tree)
{
		if (tree == NULL)
					return (0);
			return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((2^(binary_tree_height(tree) + 1)) == (binary_tree_size(tree)));
}
