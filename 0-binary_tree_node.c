#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node.
 * @parent: Pointer to parent node.
 * @value: Value to be stored in node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t*)malloc(sizeof(binary_tree_t));
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return node;
}
