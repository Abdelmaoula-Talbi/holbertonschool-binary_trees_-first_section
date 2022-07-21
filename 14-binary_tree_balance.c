#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of a binary tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of tree, or 0 id tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	else
		left_height = 0;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;
	else
		right_height = 0;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
