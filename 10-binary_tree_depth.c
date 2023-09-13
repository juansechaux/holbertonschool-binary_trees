#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: measures the depth of a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count_depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	count_depth += binary_tree_depth(tree->parent);

	if (tree->parent != NULL)
		return (count_depth + 1);
	else
		return (count_depth);
}
