#pragma once
#ifndef _13_H_
#define _13_H_

#include <string>
#include <hash_map>
using namespace std;

class Solution {
public:
  //  int romanToInt(string s) {
		//int res = 0;
		//bool flag;
		//hash_map<char,int> numMap;
		//numMap['I'] = 1;numMap['X'] = 10;numMap['C'] = 100;numMap['M'] = 1000;
		//numMap['V'] = 5;numMap['L'] = 50;numMap['D'] = 500; 
		//
		//for(int i = 0; i < s.length()-1; i++){
		//	flag = s[i] == 'I' || s[i] == 'X' || s[i] == 'C';
		//	if(flag && numMap[s[i]] < numMap[s[i+1]])
		//		res -= numMap[s[i]];
		//	else
		//		res += numMap[s[i]];
		//}
		//res += numMap[s[s.length()-1]];

		//return res;
  //  }

	//
	int romanToInt(string s) {
		int res = 0;
		bool flag;
		int numMap[256];
		numMap['I'] = 1;numMap['X'] = 10;numMap['C'] = 100;numMap['M'] = 1000;
		numMap['V'] = 5;numMap['L'] = 50;numMap['D'] = 500; 
		
		for(int i = 0; i < s.length()-1; i++){
			flag = s[i] == 'I' || s[i] == 'X' || s[i] == 'C';
			if(flag && numMap[s[i]] < numMap[s[i+1]])
				res -= numMap[s[i]];
			else
				res += numMap[s[i]];
		}
		res += numMap[s[s.length()-1]];

		return res;
    }

};


#endif