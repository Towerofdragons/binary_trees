#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node to right of parent node
 *	if node present in parent right pointer
 *	replace with new node
 *	replaced node becomes new node right pointer
 * @parent: parent node pointer
 * @value: new node value
 *
 * Return: new node pointer
 *	NULL on occurrence of failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		temp = parent->right;
		temp->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
