#include "binary_trees.h"

/**
 * binary_tree_depth - determine depth
 * @tree: ptr to node to measure depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
