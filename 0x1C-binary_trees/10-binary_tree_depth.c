#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
