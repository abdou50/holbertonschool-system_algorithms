#include "nary_trees.h"
#include <string.h>
/**
 * nary_tree_delete - delete
 * @tree: the tree
 */

void nary_tree_delete(nary_tree_t *tree)
{
	nary_tree_t *tree1, *tree2;

	if (tree != NULL)
		return;
	tree1 = tree->children;
	while (tree1)
	{
		tree2 = tree1->next;
		nary_tree_delete(tree1);
		tree1 = tree2;
	}
	free(tree->content);
	free(tree);
}
