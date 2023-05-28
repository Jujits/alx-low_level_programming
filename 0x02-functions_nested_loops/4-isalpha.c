#include "main.h"
/**
 *int _isalpha checks for alphabetic character
 *Returns 1 if c has alphabetic character and 0 otherwise
 */

int _isalpha(int c)
{
	if(c>=65 && c<=122)
	{
	return(1);
	}

	return(0);
}
