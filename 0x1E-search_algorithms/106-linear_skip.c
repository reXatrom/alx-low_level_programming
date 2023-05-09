#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *alx, *jump;

	if (list == NULL)
		return (NULL);

	for (alx = jump = list; jump->next != NULL && jump->n < value;)
	{
		alx = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			alx->index, jump->index);

	for (; alx->index < jump->index && alx->n < value; alx = alx->next)
		printf("Value checked at index [%ld] = [%d]\n", alx->index, alx->n);
	printf("Value checked at index [%ld] = [%d]\n", alx->index, alx->n);

	return (alx->n == value ? alx : NULL);
}
