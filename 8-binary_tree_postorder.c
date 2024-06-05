#include "binary_trees.h"
/**
 * binary_tree_postorder - Function that goes through a binary tree using
 * postorder traversal.
 * @tree: Pointer root node of a tree.
 * @func: Function pointer to pass node value to.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
