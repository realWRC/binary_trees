#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes a node from a tree.
 * @tree: Pointer to tree root node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
