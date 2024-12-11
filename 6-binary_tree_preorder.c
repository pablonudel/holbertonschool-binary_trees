#include "binary_trees.h"

/**
 * binary_tree_preorder - go through a tree pre-order traversal
 *
 * @tree: pointer to the root
 * @func: func pointer (in this case to a func that print the current node)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func); 
}	
