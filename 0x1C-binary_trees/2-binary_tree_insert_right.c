#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node right
 * @parent: ptr to node to insert right child in
 * @value: value to insert in node
 * Return: ptr to create node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *curr = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right)
	{
		curr = parent->right;
		new_node->right = curr;
		parent->right = new_node;
		curr->parent = new_node;
	}

	else
	{
		parent->right = new_node;
	}

	return (parent->right);
}
