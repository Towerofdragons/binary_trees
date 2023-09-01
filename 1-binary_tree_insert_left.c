#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node in left of parent node
 * @parent: pointer to parent
 * @value: value for new node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	temp = NULL;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
	}

	parent->left = new;

	if (temp != NULL)
	{
		temp->parent = new;
		new->left = temp;
	}

	return (new);
}
