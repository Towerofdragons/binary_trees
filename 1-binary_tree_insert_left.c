#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	temp = NULL;

	new = binary_tree_node(parent, value);
	if (new == NULL || parent == NULL)
		return NULL;

	if (parent -> left != NULL)
	{
		temp =  parent -> left;
	}

	new -> parent = parent;

	parent -> left = new;

	if (temp != NULL)
	{
		new -> left = temp;
	}

	return (new);
}
