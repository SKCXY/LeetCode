#pragma once
#ifndef _326_H_
#define _326_H_

#include <math.h>

class Solution
{
public:

	//method one:
	/*bool isPowerOfThree(int n) {
		if(n <= 0)
			return false;
		int remainder = 0;;
		while(n > 1){
			remainder = n %3;
			if(remainder != 0)
				return false;
			n /= 3;
		}
		return true;
    }*/

	//method two:
	bool isPowerOfThree(int n)
	{
		double a = log10((double)n)/log10((double)3);
		int m = a;

		if((a-m)==0)
		   return true;
		else
		   return false;
	}
};


#endif