#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child.
 * @parent: Pointer to the parent of the new node.
 * @value: Integer stored in the new node.
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	parent->left = new_node;

	return (new_node);
}
