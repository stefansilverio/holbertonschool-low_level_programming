#include "binary_trees.h"

/**
 * binary_tree_size - determine size of bin tree
 * @tree: ptr to root node
 * Return: size of bin tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int count = 1;

	if (tree == NULL)
		return (0);
	count = count + binary_tree_size(tree->left);
	count = count + binary_tree_size(tree->right);
	return (count);
}
