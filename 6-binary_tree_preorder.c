#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a binary tree using
 * pre-order traversal.
 * @tree: Pointer root node of a tree.
 * @func: Function pointer to pass node value to.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	if (tree != NULL)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
