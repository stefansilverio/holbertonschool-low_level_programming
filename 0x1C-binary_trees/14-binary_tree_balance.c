#include "binary_trees.h"
/**
 * binary_tree_balance - determine balance factor of bin tree
 * @tree: ptr to root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hr = 0, hl = 0;

	if (tree == NULL)
		return (0);

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	return (hl - hr);
}
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
	if (!tree->left)
		return (1);
	if (!tree->right)
		return (1);
	if (tree->left)
		hl = binary_tree_height(tree->left) + 1;
	if (tree->right)
		hr = binary_tree_height(tree->right) + 1;
	if (hl > hr)
		return (hl);
	return (hr);
}
