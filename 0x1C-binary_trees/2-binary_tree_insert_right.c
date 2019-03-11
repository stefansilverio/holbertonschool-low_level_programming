#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (!parent->right)
	{
		parent->right = new_node;
		new_node->parent = parent;
		return (parent->right);
	}
	if (parent->right) /* there are existing child nodes */
        {
		curr = parent->right; /* save grandchild node in curr */
		parent->right = new_node; /* make parent point to new child */
		new_node->right = curr; /* add grandchild */
		curr->parent = new_node;
		new_node->parent = parent; /* set link back to parent */
		return (parent->right);
	}
	return (NULL);
}
