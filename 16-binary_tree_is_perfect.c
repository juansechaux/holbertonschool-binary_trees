#include "binary_trees.h"

/**
 * binary_tree_height - goes through a binary tree using pre-order trave
 * @tree: pointer to the root node of the tree to traverse
 * Return: measures the height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countleft = 0, countright = 0;

	if (tree == NULL)
		return (0);

	countleft += binary_tree_height(tree->left);
	countright += binary_tree_height(tree->right);

	if (countleft > countright)
		return (countleft + 1);
	else
		return (countright + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 * Return: If tree is NULL return 0, else 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	else
		return (0);

}
