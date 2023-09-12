#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the parent node of the node to create
 * Return: pointer to the new node, or NULL on failure
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/*Delete Left sub-tree*/
	binary_tree_delete(tree->left);
	/*Delete right sub-tree*/
	binary_tree_delete(tree->right);

	/*At last, delete root node*/
	free(tree);
}
