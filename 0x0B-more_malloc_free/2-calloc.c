#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int length;

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
	return (array);
}
