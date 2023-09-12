#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *tempNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		tempNode = parent->right;
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = tempNode;
		newNode->parent = parent;
		tempNode->parent = newNode;
		parent->right = newNode;
	}
	else
	{
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->parent = parent;
		parent->right = newNode;
	}
	return (newNode);
}
