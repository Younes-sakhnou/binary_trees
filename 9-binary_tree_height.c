#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree. If the tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
