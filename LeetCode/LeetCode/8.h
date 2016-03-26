#pragma once
#ifndef _8_H_
#define _8_H_


#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	int myAtoi(string str) {
		int res = 0, tmp = 0;
        int sign = 1, i = 0;

		while(str[i] == ' ')	i++;
		if(str[i] == '+'){
			sign = 1;
			i++;
		}
		else if(str[i] == '-'){
			sign = -1;
			i++;
		}

		for(; i != str.length(); i++){
			if(str[i] > '9' || str[i] < '0')
				break;
			tmp = res * 10 + (str[i]-48);
			if(tmp/10 != res){
				if(sign == 1)	return INT_MAX;
				else			return INT_MIN;
			}
			res = tmp;
		}

		return sign*res;
    }
};



#endif