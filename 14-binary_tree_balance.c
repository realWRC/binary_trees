#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree.
 * @tree: Pointer to root of tree.
 * Return: The balance factor of a tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
		return (0);
	height_l = tree->left != NULL ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree->right != NULL ? (int)binary_tree_height(tree->right) : -1;

	return (height_l - height_r);
}

/**
 * binary_tree_height - Function that measure the height of a tree.
 * @tree: Pointer to tree root node.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		height_l = 1 + binary_tree_height(tree->left);
	}
	else
		height_l = 0;

	if (tree->right)
	{
		height_r = 1 + binary_tree_height(tree->right);
	}
	else
		height_r = 0;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
