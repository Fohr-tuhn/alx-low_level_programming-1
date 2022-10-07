#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amounts of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b);
{
	int *p;

	p = (int *)malloc(sizeof(int));
	if(p == 0)
	{
	   return 98;
	}
	return 0;

}
