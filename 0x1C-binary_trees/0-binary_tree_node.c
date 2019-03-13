#include "binary_trees.h"
/**
 * binary_tree_node - add node
 * @parent: ptr to node to create
 * @value: value to put in node
 * Return: ptr to new_node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	new_node->n = value;

	return (new_node);
}
