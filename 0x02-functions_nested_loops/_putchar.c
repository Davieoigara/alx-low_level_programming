#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes to the character c to stdout
 * c: the character to be printed
 *
 * return: on success 1
 * on error, -1 iss returned, and erno is set appropraitely
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
