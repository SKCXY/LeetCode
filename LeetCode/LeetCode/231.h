#pragma once
#ifndef _231_H_
#define _231_H_


class Solution {
public:
	//Ð§ÂÊ½ÏµÍ
    /*bool isPowerOfTwo(int n) {
		if(n % 2 != 0)
			return false;
		int product = 2;
		while(product <= n){
			if(product == n)
				return true;
			product *= 2;
		}
		return false;
    }*/

	bool isPowerOfTwo(int n) {
		if(n == 0)
			return false;
		int remainder = 0;
		while(n >= 2){
			remainder = n%2;
			if(remainder != 0)
				return false;
			n /= 2;
		}
		return true;
	}
};


#endif