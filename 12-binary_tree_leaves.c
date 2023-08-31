#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: Number of leaves in the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
