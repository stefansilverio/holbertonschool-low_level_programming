#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node left
 * @parent: ptr to node to insert left child in
 * @value: value to insert in node
 * Return: ptr to create node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *curr = NULL;

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left)
	{
		curr = parent->left;
		new_node->left = curr;
		parent->left = new_node;
		curr->parent = new_node;
	}

	else
	{
		parent->left = new_node;
	}

	return (parent->left);
}
