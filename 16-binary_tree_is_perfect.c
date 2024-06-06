#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Pointer to the tree.
 * Return: 1 if tree is perfect and 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t expo = 0;
	size_t height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	expo = (size_t)exponent(2, height + 1);
	return (expo - 1 == size);
}

/**
 * binary_tree_height - Function that deletes a node from a tree.
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
 * exponent - Function that return a raised to the power of b.
 * @a: Integar.
 * @b: Integar.
 * Return: Value of a to the power b.
 */
int exponent(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * exponent(a, b - 1));
}
