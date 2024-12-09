#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node or NULL if fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (!parent || !value)
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
