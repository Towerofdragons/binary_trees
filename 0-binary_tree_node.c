#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree node(no child)
 * @parent: pointer to parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: Pointer to new node
 * 	   NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node -> parent = parent;
	node -> left = NULL;
	node -> right = NULL;
	node -> n = value;

	return (node);
}
