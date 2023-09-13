#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);

	count_left += binary_tree_nodes(tree->left);
	count_right += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (count_left + count_right + 1);
	else
		return (count_left + count_right);
}
