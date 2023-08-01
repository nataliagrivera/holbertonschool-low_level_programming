#include "lists.h"
/**print_list- function that prnts allelements of a list
 *@h: points to the start of a linked list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%u]", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		count += 1;
	}
	return(count);
}
