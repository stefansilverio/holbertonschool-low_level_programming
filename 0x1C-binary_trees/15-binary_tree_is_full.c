#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	full = binary_tree_is_full(tree->left);
	full = binary_tree_is_full(tree->right);
	return (full);
}
