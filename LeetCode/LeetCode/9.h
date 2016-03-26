#pragma once
#ifndef _9_H_
#define _9_H_

#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class Solution {
public:

	////Ð§ÂÊ½ÏµÍ
 //   bool isPalindrome(int x) {
 //       stringstream stream;
	//	stream << x;
	//	string str = stream.str();

	//	for(int i = 0; i < str.length()/2; i++){
	//		if(str[i] != str[str.length() - 1 - i])
	//			return false;
	//	}
	//	return true;
 //   }

	bool isPalindrome(int x) {
		if(x < 0)
			return false;
		int revhalf = 0, slow = x, fast = x;
		while(fast){
			revhalf = revhalf*10 + slow%10;
			slow /= 10;
			fast /= 100;
		}
		return slow == revhalf || slow == revhalf/10;
	}

};

#endif 