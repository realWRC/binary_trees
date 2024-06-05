#include "binary_trees.h"
/**
 * binary_tree_inorder - Function that goes through a binary tree using
 * in-order traversal.
 * @tree: Pointer root node of a tree.
 * @func: Function pointer to pass node value to.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
