#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * countWords - counts numbers of words in string
 * @str: input string
 * Return: number of words
 */

int countWords(char *str)
{
	int count;
	int find;

	if (str == NULL)
	{
		return (0);
	}

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

	if (word == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (start < end)
	{
		word[i] = *start;
		i++;
		start++;
	}
	word[i] = '\0';
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
	char *start, *end, *word;

	wordCount = countWords(str);
	if (str == NULL || *str == '\0' || wordCount <= 0)
		return (NULL);
	grid = malloc(sizeof(char *) * (wordCount + 1));
	if (grid == NULL)
		return (NULL);
	start = end = NULL;
	find = index = length = 0;
	while (*str != '\0')
	{
		if (find)
			length++;
		if (*str != ' ' && !find)
		{
			find = 1;
			start = str;
		}
		else if (find && *str == ' ')
		{
			find = 0;
			end = str;
			word = copyWord(start, end, length);
			grid[index] = word;
			index++;
		}
		str++;
	}
	if (find)
	{
		end = str;
		grid[index] = copyWord(start, end, length);
		index++;
	}
	grid[index] = NULL;
	return (grid);
}
