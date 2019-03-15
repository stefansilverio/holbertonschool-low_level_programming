#include "binary_trees.h"

/**
 * binary_tree_levelorder - print all nodes on same level
 * @tree: ptr to root node
 * @func: print data in node
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = 0, d;

	if (!tree || !func)
		return;

	h = binary_tree_height(tree);

	for (d = -1; d < h; d++)
		print_level_order(tree, func, d);
}

/**
 * print_level_order - print all nodes on same level
 * @tree: ptr to root node
 * @level: level you're on
 * @func: print node data
 * Return: Nothing
 */
void print_level_order(const binary_tree_t *tree, void (*func)(int), int level)
{
	(void)level;
	(void)tree;
	if (level == -1)
		func(tree->n);
	else if (level > -1)
	{
		print_level_order(tree->left, func, level - 1);
		print_level_order(tree->right, func, level - 1);
	}
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
	if (tree->left)
		hl = binary_tree_height(tree->left) + 1;
	if (tree->right)
		hr = binary_tree_height(tree->right) + 1;
	if (hl > hr)
		return (hl);
	return (hr);
}
