#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: Number of leaf nodes in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
