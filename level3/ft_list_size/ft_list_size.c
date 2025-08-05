#include "ft_list_size.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_list_size(t_list *begin_list)
{
	int i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
.

int main(void)
{
	int i = 0;
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	i = ft_list_size(node2);
	printf("%d/n", i);
	return (0);
}