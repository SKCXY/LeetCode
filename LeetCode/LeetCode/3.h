#pragma once
#ifndef _3_H_
#define _3_H_

#include <set>
#include <map>
#include <string>
using namespace std;


class Solution
{
public:
	
	//利用set进行查找
	//int lengthOfLongestSubstring(string s) {
 //       int max = 0;
	//	set<char> strSet;

	//	for(int i = 0; i < s.length(); i++){
	//		for(int j = i; j < s.length(); j++){
	//			if(strSet.find(s[j]) == strSet.end())
	//				strSet.insert(s[j]);
	//			else
	//				break;
	//		}
	//		//cout << strSet.size() << endl;
	//		if(strSet.size() > max)
	//			max = strSet.size();
	//		strSet.clear();
	//	} 

	//	return max;
 //   }


	int lengthOfLongestSubstring(string s) {
        int max = 0, curIndex = 0;
		map<char, int> m;
		map<char, int>::iterator it;
		int i = 0;

		while(i < s.length())
        {
            if((it = m.find(s[i])) == m.end())
                m[s[i]] = i;
            else
            {
				if(it->second >= curIndex)
                    curIndex = it->second + 1;

                it->second = i;
            }

            if(max < (i - curIndex + 1))
				max = (i - curIndex + 1);
            i++;
        }
		 return max;
    }


	 //int lengthOfLongestSubstring(string s) {

  //      map<char,int> hash;
  //      int maxLen = 0,curIndex = 0;
  //      int i = 0;
   /*     while(i < s.length())
        {
            if(hash.find(s[i]) == hash.end())
            {
                hash[s[i]] = i;
            }
            else
            {
                if(hash[s[i]] >= curIndex)
                    curIndex = hash[s[i]] + 1;

                hash[s[i]] = i;

            }

             if(maxLen < (i - curIndex + 1))
                    maxLen = (i - curIndex + 1);
                i++;
        }*/
  //      return maxLen;
  //  }

};




#endif