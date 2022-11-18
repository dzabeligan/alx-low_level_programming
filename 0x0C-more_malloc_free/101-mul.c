#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * skip_zeroes - Iterates through a string of numbers containing
 *   leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *skip_zeroes(char *str)
{
	while (str && *str == '0')
		str++;

	return (str);
}

/**
 * create_array - Create an array of chars and initialize it with
 *   the character '0'. Add a terminating null byte
 *   if there is insufficient space, the function exits with a status of 98
 * @size: size of the array to be initialized
 *
 * Return: A pointer to the array.
 */
char *create_array(int size)
{
	char *array;
	int i;

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (size - 1); i++)
		array[i] = '0';

	array[i] = '\0';

	return (array);
}

/**
 * multiply_helper - Multiply a string of numbers by a single digit.
 * @result_buffer: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @pad_right: The necessary number of leading zeroes.
 *
 * Return: 0 if successful, -1 otherwise
 */
int multiply_helper(char *result_buffer, char *mult, int digit, int pad_right)
{
	int len, carry = 0;

	len = strlen(mult);
	mult += len - 1;

	while (pad_right--)
	{
		*result_buffer = '0';
		result_buffer--;
	}

	for (; len > 0; len--, mult--, result_buffer--)
	{
		int num = 0;

		if (*mult < '0' || *mult > '9')
			return (-1);

		num = (*mult - '0') * digit + carry;
		*result_buffer = (num % 10) + '0';
		carry = num / 10;
	}
	if (carry)
		*result_buffer = carry + '0';

	return (0);
}

/**
 * add_nums - Add the numbers stored in two strings.
 * @result_buffer: The buffer storing the running final product.
 * @step_buffer: The next product to be added.
 * @size: size of buffer
 *
 */
void add_nums(char *result_buffer, const char *step_buffer, int size)
{
	int carry = 0;

	while (size--)
	{
		int sum = 0;
		int digit1 = result_buffer[size] - '0';
		int digit2 = step_buffer[size] - '0';

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		*(result_buffer + size) = ((sum) % 10) + '0';
	}
	if (carry)
		*(result_buffer + size) = carry + '0';
}

/**
 * handle_exit - exit helper
 * @step_buffer: step buffer
 * @result_buffer: result buffer
 * @ret: status
 *
 */
void handle_exit(char *step_buffer, char *result_buffer, int ret)
{
	if (step_buffer)
		free(step_buffer);
	if (result_buffer)
		free(result_buffer);
	if (ret)
	{
		printf("Error\n");
		exit(98);
	}
}

/**
 * main - Multiply two positive numbers
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Return: Return 0. if the number of arguments is incorrect or one number
 *   contains non-digits, the function exits with a status of 98.
 */
int main(int argc, char *argv[])
{
	char *result_buffer = NULL, *step_buffer = NULL;
	int size, i, digit, ret = 1, pad_right = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	argv[1] = skip_zeroes(argv[1]);
	argv[2] = skip_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = strlen(argv[1]) + strlen(argv[2]);
	result_buffer = create_array(size + 1);
	if (result_buffer == NULL)
		goto exit;
	step_buffer = create_array(size + 1);
	if (step_buffer == NULL)
		goto exit;

	for (i = strlen(argv[2]) - 1; i >= 0; i--)
	{
		if (*(argv[2] + i) >= '0' && *(argv[2] + i) <= '9')
			digit = *(argv[2] + i) - '0';
		else
			goto exit;
		if (multiply_helper(step_buffer + size - 1, argv[1], digit, pad_right++))
			goto exit;
		add_nums(result_buffer, step_buffer, size);
	}
	printf("%s\n", skip_zeroes(result_buffer));
	ret = 0;
exit:
	handle_exit(step_buffer, result_buffer, ret);
	return (0);
}
