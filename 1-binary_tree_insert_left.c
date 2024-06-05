#include <stlib.h>
#include "binary_trees.h"

/**
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if parent == NULL
		return (NULL);
	binary_tree_t *node = (binary_tree_t*)malloc(sizeof(binary_tree_t));
	node->n = value;
	
}
