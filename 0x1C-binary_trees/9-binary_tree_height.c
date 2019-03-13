#include "binary_trees.h"

/**
 * binary_tree_height - check height of binary tree
 * @tree: ptr to root node of tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int hr = 0, hl = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		hl = binary_tree_height(tree->left) + 1;
	binary_tree_height(tree->left);
	if (tree->right)
		hr = binary_tree_height(tree->right) + 1;
	binary_tree_height(tree->right);
	if (hl > hr)
		return (hl);
	return (hr);
}
