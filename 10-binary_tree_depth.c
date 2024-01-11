#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of binary tree from a specific node
 * @tree: Pointer to the root node of the binary tree
 * Return: Depth of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
