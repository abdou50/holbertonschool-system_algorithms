#include <stdlib.h>
#include <stdio.h>

#include "graphs.h"
/**
 * graph_create - create a graph
 *
 * Return: a pointer to the new graph created
 */

graph_t *graph_create(void)
{
	graph_t *new = malloc(sizeof(graph_t));

	if (new == NULL)
		return (NULL);

	new->nb_vertices = 0;
	new->vertices = NULL;
	return (new);
}
