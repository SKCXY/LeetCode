#pragma once
#ifndef _191_H_
#define _191_H_

#include <cstdint>

class Solution {
public:
    int hammingWeight(uint32_t n) {
		int count = 0;
		while(n > 0){
			if(n % 2 == 1)
				count++;
			n /= 2;
		}
		return count;
    }
};



#endif