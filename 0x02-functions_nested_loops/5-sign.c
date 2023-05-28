#include "main.h"
/**
 *print_sign prints the sign of a number
 *Returns 1 if n is greater than o, Returns 0 if n is zero, Returns -1 if n is less than 0
 */

int print_sign(int n)
{
	if(n>0)
	{
		_putchar(43);
		return(1);
	}
	else if(n<0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
}
			

