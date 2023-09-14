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

	if (tree->left != NULL && tree->right != NULL)
		return (count_left + count_right + 1);
	else
		return (count_left + count_right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to traverse
 * Return: If tree is NULL return 0, else 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int val1 = 0, val2 = 0;

	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		val1 = 1;
	if (binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right))
		val2 = 1;
	if (val1 == 1 && val2 == 1)
		return (1);
	else
		return (0);

}
