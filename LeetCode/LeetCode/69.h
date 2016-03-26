#pragma once
#ifndef _69_H_
#define _69_H_

#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
		if(x < 0)	return INT_MIN;
		if(x == 0)	return 0;
		int low = 1, high = x;
		int middle = low + high/2;
		while(low < high){
			cout << "low==>" << low << "\t";
			cout << "high==>" << high << "\t";
			cout << "middle==>" << middle << endl;
			if(middle * middle < x){
				low = middle + 1;
			}
			else if(middle * middle > x){
				high = middle - 1;
			}
			else
				return middle;
			middle = low + (high-low)/2;
		}
		
		return (middle * middle > x ? middle-1 : middle);
    }
};



#endif