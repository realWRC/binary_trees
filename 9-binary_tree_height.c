#include "binary_trees.h"

/**
 * binary_tree_height - Function that deletes a node from a tree.
 * @tree: Pointer to tree root node.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;
	binary_tree_t *tmp = tree->right;

	if (tree == NULL || tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->right;
		height_r++;
	}

	tmp = tree->left;
	if (tmp == NULL)
		return (height_r);
	while (tmp != NULL)
	{
		tmp = tmp->left;
		height_l++;
	}
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
