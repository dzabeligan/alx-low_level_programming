#include "main.h"
#include <stdlib.h>

#include <stdio.h>

/**
 * Word - get next word in string
 * @str: pointer to string
 *
 * Return: return pointer to allocated string containing next word
 */
static char *Word(char **str)
{
	char *word = NULL;
	int len = 0;
	int i = 0;

	while ((*str)[len] && (*str)[len] != ' ')
		len++;

	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (word);

	for (i = 0; i < len; i++)
		word[i] = *(*str)++;
	word[i] = '\0';

	return (word);
}

/**
 * Word_count - count words in string
 * @str: string
 *
 * Return: number of words in string
 */
static int Word_count(char *str)
{
	int word_count = 0;

	if (*str++ != ' ')
		word_count++;

	while (*str)
	{
		if (*str != ' ' && *(str - 1) == ' ')
			word_count++;
		str++;
	}
	return (word_count);
}

/**
 * Free_words - free 2 dimensional array, words
 * @words: pointer to array
 * @height: height of array
 *
 */
static void Free_words(char **words, int height)
{
	while (--height >= 0)
		free(words[height]);
	free(words);
}

/**
 * strtow - split a string into words
 * @str: string
 *
 * Return: pointer to array of split words
 */
char **strtow(char *str)
{
	char **words = NULL;
	char *str_copy = str;
	int word_count = 0, i = 0;

	if (str_copy == NULL || *str_copy == '\0')
		return (words);

	word_count = Word_count(str_copy);
	if (word_count == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (words);

	while (*str_copy)
	{
		if ((str_copy == str && *str_copy != ' ')
			|| (*str_copy != ' ' && *(str_copy - 1) == ' '))
		{
			char *word = Word(&str_copy);

			if (word == NULL)
			{
				Free_words(words, i);
				return (NULL);
			}
			words[i++] = word;
		}
		str_copy++;
	}
	words[i] = NULL;
	return (words);
}
