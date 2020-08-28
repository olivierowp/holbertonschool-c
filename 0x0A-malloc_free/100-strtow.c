#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

int countWords(char *str)
{
	int count;
	int find;

	count = 0;
	find = 0;
	while (*str != '\0')
	{
		if (*str != ' ' && !find)
		{
			find = 1;
			count++;
		}
		else if (*str == ' ' && find)
		{
			find = 0;
		}
		str++;
	}
	return (count);
}

/**
 * copyWord - copy word
 * @start: start pointer
 * @end: end pointer
 * @size: size of word
 * Return: pointer of copied word
 */
char *copyWord(char *start, char *end, int size)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (size + 1));

	i = 0;
	while (start < end)
	{
		word[i] = *start;
		i++;
		start++;
	}
	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string of words to be split
 * Return: double pointer to strings
 */
char **strtow(char *str)
{
	int wordCount, find, length, index;
	char **grid;
	char *start, *end;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	wordCount = countWords(str);
	grid = malloc(sizeof(char *) * (wordCount + 1));

	start = end = NULL;
	find = index = length = 0;

	while (*str != '\0')
	{
		if (find)
		{
			length++;
		}

		if (*str != ' ' && !find)
		{
			find = 1;
			start = str;
		}
		else if (find && *str == ' ')
		{
			find = 0;
			end = str;
			grid[index] = copyWord(start, end, length);
			index++;
		}
		str++;
	}
	return (grid);
}
