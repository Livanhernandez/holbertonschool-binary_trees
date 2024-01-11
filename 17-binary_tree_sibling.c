#include "binary_trees.h"

/**
 * binary_tree_siblings - Finds the siblings of a node in a binary tree
 * @node: Pointer to the node for which to find the sibling
 * Return: Pointer for the sibling node, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return(node->parent->right);
	else
		return (node->parent->left);
}
