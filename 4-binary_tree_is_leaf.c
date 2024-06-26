#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a tree os leaf
 *
 * @node: pointer to the node
 *
 * Return: 1 when node is leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
