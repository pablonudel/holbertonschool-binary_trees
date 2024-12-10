#include "binary_trees.h"
/**
 * get_height - measures the height of a binary tree*
 * @tree: a pointer to the root node of the tree to measure the height*
 *
 * Return: int - the height of tree
 */
int get_height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		l = 1 + get_height(tree->left);
	if (tree->right)
		r = 1 + get_height(tree->right);

	return (l > r ? l : r);
}
/**
 * get_size - measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: int - the size of tree
 */
int get_size(const binary_tree_t *tree)
{
	int size = 1;

	if (!tree)
		return (0);

	if (tree->left)
		size += get_size(tree->left);

	if (tree->right)
		size += get_size(tree->right);

	return (size);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if is perfect or 0 if not or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int pow = 0, res = 2;

	if (!tree || tree->parent)
		return (0);

	while (pow < get_height(tree))
	{
		res = res * 2;
		pow++;
	}

	if (get_size(tree) == res - 1)
		return (1);

	return (0);
}
