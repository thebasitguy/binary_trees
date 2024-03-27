#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a binary search tree
 *
 * @tree: Pointer to the root node of the BST to search
 * @value: The value to search for in the BST
 *
 * Return: NULL If the tree is null or the value is not found,
 *         otherwise, a pointer to the node containing the value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}

