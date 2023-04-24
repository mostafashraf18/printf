#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 *  struct fmt - function to check for formats
 *  @type: The format to printf 
 *  @f: The print function
 */
typedef struct fmt
{
	char *type;
	int (*f)();
} fmt_t;

int _putchar(char c);



#endif
