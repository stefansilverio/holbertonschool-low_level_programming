#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	int count = 1;

	if (tree == NULL)
		return (0);

	count = count + binary_tree_size(tree->left);
	count = count + binary_tree_size(tree->right);
	return (count);
}
