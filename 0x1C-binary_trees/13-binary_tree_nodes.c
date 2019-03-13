#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes w/ >= 1 child
 * @tree: ptr to root node of bin tree
 * Return: # nodes w/ >= 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int child1 = 0, child2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	child1 = binary_tree_nodes(tree->left);
	child2 = binary_tree_nodes(tree->right);
	return ((child1 + child2) + 1);
}
