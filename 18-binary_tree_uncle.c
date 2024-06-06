#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: Pointer to node.
 * Return: Pointer to uncle node otherwise NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(tree->parent));
}

/**
 * binary_tree_sibling - Function that finds the sibling of a node in
 * a binary tree.
 * @node: Pointer to the node.
 * Return: Pointer to sibling node on success otherwise NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
