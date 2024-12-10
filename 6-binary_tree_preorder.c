#include "binary_tree.h"
/**
 * binary_tree_preorder - print the element of the tree using the pre-order traversal 
 * @tree: tree to go through
 * @func: the function to use 
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL | func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binaary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}		
