#include "binary_trees.h"

/**
 * binary_tree_height - goes through a binary tree using pre-order trave
 * @tree: pointer to the root node of the tree to traverse
 * Return: measures the height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	count += binary_tree_height(tree->left);
	count += binary_tree_height(tree->right);

	if (tree->left == NULL)
		return (1);
	else if (tree->right == NULL)
		return (1);
	else
		return (count);

}
