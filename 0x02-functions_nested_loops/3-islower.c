#include"main.h"
/**
 *_islower checks for lower case character
 *Returns 1 if true
 *Returns 0 if otherwise
 */

int _islower(int c)
{
	if(c>=97 && c<=122)
	{
		return(1);
	}
	return (0);
}
