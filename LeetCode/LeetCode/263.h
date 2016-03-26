#pragma once
#ifndef _263_H_
#define _263_H_


class Solution {
public:
	
	bool isUgly(int num) {
		if(num <= 0)
			return false;
		
		for(int i = 2; i <= 5; i++){
			while(num%i == 0)
				num /= i;
		}

		if(num == 1)
			return true;
		return false;
    }
};


#endif