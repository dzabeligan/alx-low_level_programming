#include <stdio.h>

/**
 * execute_before_main - executes function before main
 */
void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
