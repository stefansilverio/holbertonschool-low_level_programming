#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t* new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;

	if (parent == NULL)
	{
		parent = new_node;
		return (parent);
	}
	else if (parent->n > value)
	{
		parent->left = new_node;
		new_node->parent = parent;
		return (parent->left);
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		return (parent->right);
	}
	return (NULL);
}
