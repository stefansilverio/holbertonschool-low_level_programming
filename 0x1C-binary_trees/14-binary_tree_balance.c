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
	if (tree->left)
		hl = binary_tree_balance(tree->left) + 1;
	binary_tree_balance(tree->left);
	if (tree->right)
		hr = binary_tree_balance(tree->right) + 1;
	binary_tree_balance(tree->right);
	return (hl - hr);
}
