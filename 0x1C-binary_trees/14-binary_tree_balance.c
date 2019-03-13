#include "binary_trees.h"
/**
 * binary_tree_balance - determine balance factor of bin tree
 * @tree: ptr to root node
 * Return: balance factor
 */

int right_height(const binary_tree_t *tree);
int left_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int hr = 0, hl = 0;

	if (tree == NULL)
		return (0);

	hl = left_height(tree);
	hr = right_height(tree);

	return (hl - hr);
}
/**
 * left_height - left height
 * @tree: ptr to root node
 * Return: left height
 */
int left_height(const binary_tree_t *tree)
{
	int hl = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		hl = left_height(tree->left) + 1;
	return (hl);
}
/**
 * right_height - right height
 * @tree: ptr to root node
 * Return: right height
 */
int right_height(const binary_tree_t *tree)
{
	int hr = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		hr = right_height(tree->right) + 1;
	return (hr);
}
