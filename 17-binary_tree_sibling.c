#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return:  pointer to the sibling node,
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
	{
		if (node->parent->right)
			sibling = node->parent->right;
		else
			sibling = NULL;
	}
	if (node == node->parent->right)
	{
		if (node->parent->left)
			sibling = node->parent->left;
		else
			sibling = NULL;
	}
	return (sibling);
}
