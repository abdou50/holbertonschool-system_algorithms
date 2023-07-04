#include "nary_trees.h"
#include <string.h>
/**
 * path_exists - checks if a path exists
 * @root: the root 
 * @path: the path
 * Return: 1 or 0
 */
int path_exists(nary_tree_t const *root, char const *const *path)
{
	nary_tree_t *tmp;

	if (!root || !path || strcmp(root->content, *path))
		return (0);

	if (*(++path) == NULL)
		return (1);

	for (tmp = root->children; tmp; tmp = tmp->next)
		if (path_exists(tmp, path))
			return (1);

	return (0);
}