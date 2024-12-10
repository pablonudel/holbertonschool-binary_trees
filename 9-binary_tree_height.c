#include "binary_trees.h"
/**
 
binary_tree_height - measures the height of a binary tree*
@tree: a pointer to the root node of the tree to measure the height*
Return: size_t - the height of tree*/
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t l = 0, r = 0;

        if (!tree)
                return (0);

        if (tree->left)
                l = 1 + binary_tree_height(tree->left);
        if (tree->right)
                r = 1 + binary_tree_height(tree->right);

        return (l > r ? l : r);
}
