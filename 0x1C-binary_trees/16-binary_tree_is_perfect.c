#include "binary_trees.h"
/**
* binary_tree_is_perfect - check if bin tree is perfect
* @tree: ptr to root node of tree
* Return: 1 if perfect 0 if not
*/
size_t binary_tree_left(const binary_tree_t *tree);
size_t binary_tree_right(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hr = 0, hl = 0, node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		hl = binary_tree_left(tree->left);

	if (tree->right)
		hr = binary_tree_right(tree->right);

	if (hl != hr)
		return (0);

	node = binary_tree_is_full(tree);

	if (node)
		return (1);

	return (0);
}
/**
 * binary_tree_left - check height of binary tree
 * @tree: ptr to root node of tree
 * Return: height
 */
size_t binary_tree_left(const binary_tree_t *tree)
{
	int hl = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		hl = binary_tree_left(tree->left) + 1;
	return (hl);
}
/**
 * binary_tree_right - check height of binary tree
 * @tree: ptr to root node of tree
 * Return: height
 */
size_t binary_tree_right(const binary_tree_t *tree)
{
	int hr = 1;

	if (tree == NULL)
		return (0);
	if (tree->right)
		hr = binary_tree_right(tree->right) + 1;
	return (hr);
}
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: ptr to root node
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
