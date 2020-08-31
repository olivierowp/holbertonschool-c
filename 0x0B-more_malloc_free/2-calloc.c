#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int length, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	length = size * nmemb;
	array = malloc(length);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		array[i] = 0;
	}
	return (array);
}
