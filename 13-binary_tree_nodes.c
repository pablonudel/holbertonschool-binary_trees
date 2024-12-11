#include "binary_trees.h"
/**
 * binary_tree_nodes - A function that returns the # of nodes in a tree with childrens
 * @tree: tree to check 
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t node = 0;

	if (tree ==NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left | tree-> right) ? : 0)
			node += binary_trees_nodes(tree->left);
		node += binary tree_nodes(tree->right);
		return (node);
	}
}
