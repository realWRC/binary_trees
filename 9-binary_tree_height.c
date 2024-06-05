#include "binary_trees.h"

/**
 * binary_tree_height - Function that deletes a node from a tree.
 * @tree: Pointer to tree root node.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	binary_tree_t *tmp = tree->right;

	if (tree == NULL || tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->right;
		height++;
	}
	return (height);
}
