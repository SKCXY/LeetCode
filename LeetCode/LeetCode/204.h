#pragma once
#ifndef _204_H_
#define _204_H_

#include <cmath>


class Solution
{
public:
	int countPrimes(int n) {
        if(n < 2)
			return 0;
		int count = 0;
		for(int i = 2; i < n; i++){
			if(isPrime(i))
				count ++;
		}
		return count;
    }
	//determine the num is prime number or no
	bool isPrime(int n){
		if(n == 2)
			return true;
		for(int i = 3; i*i <= n; i += 2){
			if(n%i == 0)
				return false;
		}
		return true;
	}
};


#endif