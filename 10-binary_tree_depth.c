#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node.
 * @tree: Pointer to tree root node.
 * Return: The depth of the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	else
		depth = 0;
	return (depth);
}
