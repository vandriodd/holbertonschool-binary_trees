#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to parent node
 * @value: value to store in the new node
 *
 * Return: pointer to new node,
 * NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node; /* new node is parent of child */
		new_node->left = NULL;
	}
	parent->right = new_node;

	return (new_node);
}
