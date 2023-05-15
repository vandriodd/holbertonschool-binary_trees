#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node
 *
 * Return:
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;

    if (!tree)
        return (0);

    left = binary_tree_height(tree->left);
    right = binary_tree_height(tree->right);
    return (left - right);
}
