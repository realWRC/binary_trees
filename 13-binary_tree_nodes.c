#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts leaves in a tree.
 * @tree: Pointer root node of a tree.
 * Return: Number of leaves in a tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if ((tree == NULL) || (tree->right == NULL && tree->left == NULL))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - Function that measures the size of a tree.
 * @tree: Pointer to tree root node.
 * Return: Size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		size = 1 + binary_tree_size(tree->left) +  binary_tree_size(tree->right);
	}
	return (size);
}

/**
 * binary_tree_leaves - Function that counts leaves in a tree.
 * @tree: Pointer root node of a tree.
 * Return: Number of leaves in a tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
