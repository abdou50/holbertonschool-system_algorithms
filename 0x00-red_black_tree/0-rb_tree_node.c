#include "rb_trees.h"
/**
 * rb_tree_node - Prints a red-black tree
 *
 * @parent: Pointer to the root node of the tree to print
 * @value: Pointer to the root node of the tree to print
 * @color: Pointer to the root node of the tree to print
 * Return: new node or null
 */
rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color)
{
	rb_color_t *newnode = malloc(sizeof(*newnode));

	if (!newnode)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->color = color;
	return (newnode);
}
