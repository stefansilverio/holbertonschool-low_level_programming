#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t* curr = parent; /* 2nd reference to head */
	binary_tree_t* new_node = malloc(sizeof(binary_tree_t));

        if (new_node == NULL)
                return (NULL);

        new_node->n = value; /* set value in new_node */

        if (parent == NULL)
        {
                parent = new_node;
                return (parent);
        }
	if (!parent->left)
	{
		parent->left = new_node;
		new_node->parent = parent;
		return (parent->left);
	}
	if (parent->left) /* there are existing child nodes */
        {
		curr = parent->left; /* save grandchild node in curr */
		parent->left = new_node; /* make parent point to new child */
		new_node->left = curr; /* add grandchild */
		curr->parent = new_node;
		new_node->parent = parent; /* set link back to parent */
		return (parent->left);
	}
	return (NULL);
}
