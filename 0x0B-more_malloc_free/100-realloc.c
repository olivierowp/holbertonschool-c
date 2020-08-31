#include <stdlib.h>

/**
 * copy - copy a source to string target
 * @source: input pointer
 * @target: size of old ptr
 * @size: size of new ptr
 * Return: reallocated ptr
 */
char *copy(char *source, char *target, unsigned int size)
{
	char *start;
	unsigned int i;

	start = target;
	for (i = 0; i < size; i++)
	{
		target[i] = source[i];
	}
	return (start);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: input pointer
 * @old_size: size of old ptr
 * @new_size: size of new ptr
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *realloc;

	if (ptr == NULL)
	{
		realloc = malloc(new_size);
		return (realloc);
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	realloc = malloc(new_size);
	if (realloc == NULL)
	{
		return (NULL);
	}
	copy(ptr, realloc, old_size);
	free(ptr);
	return (realloc);
}
