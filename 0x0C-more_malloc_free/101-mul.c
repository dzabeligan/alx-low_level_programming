#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Compute length of a string
 * @str: string
 *
 * Return: length of string
 */
static int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _memset - fill memory with a constant byte
 * @s: string
 * @b: character, byte
 * @n: number of bytes to write
 *
 * Return: Pointer to memory after filling
 */
static char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

/**
 * _isdigit - Check if character is digit
 * @c: The character to check
 *
 * Return: 1 if character is digit, 0 if otherwise
 */
static int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * skip_zeroes - skip zeroes at the beginning of string
 * @str: string
 *
 * Return: pointer to the first non-zero element
 */
static char *skip_zeroes(char *str)
{
	while (str && *str == '0')
		str++;
	return (str);
}

/**
 * product - multiply a string of numbers by a single digit
 * @bufferEnd: The end of buffer to store the result
 * @numStr: string of numbers
 * @d: digit
 * @pad: number to pad right with zeroes
 * If numStr contains a non-digit, the function exits with a status value of 98
 *
 * Return: 0 if successful, 1 otherwise
 */
static int product(char *bufferEnd, char *numStr, int d, int pad)
{
	int len, carry = 0;

	len = _strlen(numStr) - 1;
	numStr += len;

	while (pad--)
	{
		*bufferEnd = '0';
		bufferEnd--;
	}

	for (; len >= 0; len--, numStr--, bufferEnd--)
	{
		int num = 0;

		if (!_isdigit(*numStr))
			return (1);

		num = (*numStr - '0') * d + carry;
		*bufferEnd = (num % 10) + '0';
		carry = num / 10;
	}

	if (carry)
		*bufferEnd = (carry % 10) + '0';
	return (0);
}

/**
 * infinite_add - add two string of numbers
 * @n1: number
 * @n2: number
 * @r: buffer to store the result
 * @size_r: size of buffer
 *
 */
static void infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;
	int len2 = 0;
	int carry = 0;

	while (n1[++len1])
		;
	while (n2[++len2])
		;

	while (len1 || len2)
	{
		int sum = 0;
		int digit1 = len1 != 0 ? n1[len1 - 1] - '0' : 0;
		int digit2 = len2 != 0 ? n2[len2 - 1] - '0' : 0;

		sum = digit1 + digit2 + carry;

		*(r + --size_r) = ((sum) % 10) + '0';
		carry = sum / 10;
		if (len1)
			len1--;
		if (len2)
			len2--;
	}
	*(r + --size_r) = carry + '0';
}

/**
 * print_result - print result buffer
 * @buf: string buffer
 *
 */
static void print_result(char *buf)
{
	while (*buf)
		_putchar(*buf++);
	_putchar('\n');
}

/**
 * handle_exit - helper for main
 * @stepBuf: string buffer
 * @resultBuf: string buffer
 * @ret: ret check
 *
 * Return: 0 is successful, exit with status 98 otherwise
 */
static int handle_exit(char *stepBuf, char *resultBuf, int ret)
{
	if (stepBuf)
		free(stepBuf);
	if (resultBuf)
		free(resultBuf);
	if (ret)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
/**
 * main - multiply two positive numbers
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 * If the number of arguments is incorrect or arguments contain
 * non-digits, print `Error` exits with a status 98
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *resultBuf = NULL, *stepBuf = NULL, *argv_1_copy, *argv_2_copy;
	int bufLen, i, ret = 1, pad = 0;

	if (argc != 3)
		goto exit;
	argv_1_copy = skip_zeroes(argv[1]);
	argv_2_copy = skip_zeroes(argv[2]);

	if (*(argv_1_copy) == '\0' || *(argv_2_copy) == '\0')
	{
		printf("0\n");
		return (0);
	}
	bufLen = _strlen(argv_1_copy) + _strlen(argv_2_copy);
	resultBuf = (char *)malloc(bufLen + 1);
	if (resultBuf == NULL)
		goto exit;
	_memset(resultBuf, '0', bufLen);
	resultBuf[bufLen] = '\0';

	stepBuf = (char *)malloc(bufLen + 1);
	if (stepBuf == NULL)
		goto exit;
	stepBuf[bufLen] = '\0';

	for (i = _strlen(argv_2_copy) - 1; i >= 0; i--)
	{
		if (!_isdigit(*(argv_2_copy + i)))
			goto exit;
		_memset(stepBuf, '0', bufLen);
		if (product(stepBuf + bufLen - 1, argv[1], *(argv_2_copy + i) - '0', pad++))
			goto exit;
		infinite_add(resultBuf, stepBuf, resultBuf, bufLen);
	}
	print_result(skip_zeroes(resultBuf));
	ret = 0;
exit:
	return (handle_exit(stepBuf, resultBuf, ret));
}
