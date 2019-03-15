#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *status = NULL;
	int d_f = 0, d_s = 0;

	if (!first || !second)
		return (NULL);

	if (first == second->parent)
		return ((binary_tree_t*)first);

	if (second == first->parent)
		return ((binary_tree_t*)second);

	d_f = binary_tree_depth(first);
	d_s = binary_tree_depth(second);

	if (d_f >= d_s)
	{
		status = binary_trees_ancestor(first->parent, second);
		if (status)
			return (status);
	}
	else
	{
		status = binary_trees_ancestor(first, second->parent);
		if (status)
			return (status);
	}

	return (NULL);
}

/**
 * binary_tree_depth - determine depth
 * @tree: ptr to node to measure depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
