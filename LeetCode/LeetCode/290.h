#pragma once
#ifndef _290_H_
#define _290_H_


#include <vector>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;


class Solution
{
public:
	bool wordPattern(string pattern, string str) {
		unordered_map<char, string> map;
		vector<string> subStr = split(str, " ");

		if(pattern.size() != subStr.size())
			return false;

		for(int i = 0; i < pattern.size(); i++){
			
			cout << pattern[i] << "---->" << subStr[i] << endl;
			if(map.find(pattern[i]) != map.end()){
				if(map[pattern[i]].compare(subStr[i]) != 0)
					return false;
			}else{
				for(int j = 0; j < i; j++){
					if(map[pattern[j]] == subStr[i])
						return false;
				}
				map[pattern[i]] = subStr[i];
			}
			
		}
		return true;
    }

	//×Ö·û´®·Ö¸îº¯Êı
	vector< string> split(string str, string pattern)
	{
		vector<string> ret;
		if(pattern.empty()) 
			return ret;
		size_t start=0,index=str.find_first_of(pattern,0);
		while(index!=str.npos)
		{
			if(start!=index)
				ret.push_back(str.substr(start,index-start));
			start=index+1;
			index=str.find_first_of(pattern,start);
		}
		if(!str.substr(start).empty())
			ret.push_back(str.substr(start));
		return ret;
	}

};



#endif