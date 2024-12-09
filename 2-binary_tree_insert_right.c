#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (!value)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;

	if (parent->right)
	{
		parent->right->right = parent->right;
		parent->right = new_node;
		return (new_node);
	}

	parent->right = new_node;
	return (new_node);
}
