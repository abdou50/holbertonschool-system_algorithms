#include "nary_trees.h"
#include <string.h>
/**
 * nary_tree_insert - nary tree
 * @parent: parent
 * @str: string to duplicate
 * Return: the new node
 */
nary_tree_t *nary_tree_insert(nary_tree_t *parent, char const *str)
{
	nary_tree_t *new_node;

	new_node = malloc(sizeof(nary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->content = strdup(str);
	new_node->nb_children = 0;
	new_node->children = NULL;
	new_node->next = NULL;

	if (new_node != NULL && parent != NULL)
	{
		parent->nb_children++;
		if (parent->children)
		{
			new_node->next = parent->children;
		}
		parent->children = new_node;
	}
	return (new_node);
}
