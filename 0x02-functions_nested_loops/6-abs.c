#include "main.h"
/**
 *_abs computes the value of an integer
 *Returns 0 Always
 */

int _abs(int c)
{
	if (c < 0)
	{
		int val;
		val=c * -1;
		return(val);
	}
	return(c);
}
