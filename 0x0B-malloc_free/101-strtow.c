#include "main.h"
#include <stdlib.h>

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
 * Words - get all words given the word count
 * @str: string
 * @word_count: number of words in string
 *
 * Return: pointer to array of split words
 */
static char **Words(char *str, int word_count)
{
	int i = 0;
	char *first_char = str;
	char **words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (words);

	while (*str)
	{
		if ((first_char == str && *str != ' ')
			|| (*str != ' ' && *(str - 1) == ' '))
		{
			char *word = Word(&str);

			if (word == NULL)
			{
				Free_words(words, i);
				return (NULL);
			}
			words[i++] = word;
		}
		str++;
	}
	words[i] = NULL;
	return (words);
}

/**
 * strtow - split a string into words
 * @str: string
 *
 * Return: pointer to array of split words
 */
char **strtow(char *str)
{
	int word_count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = Word_count(str);
	if (word_count == 0)
		return (NULL);

	return (Words(str, word_count));
}
