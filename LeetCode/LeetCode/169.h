#pragma once
#ifndef _169_H_
#define _169_H_

#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
	int majorityElement(vector<int>& nums) {
		int max = 0, index = 0;
        unordered_map<int, int> intHash;
		for(int i = 0; i < nums.size(); i++){
			if(intHash.find(nums[i]) != intHash.end()){
				intHash[nums[i]] ++;
			}else
				intHash[nums[i]] = 1;
			if(intHash[nums[i]] > max){
				max = intHash[nums[i]];
				index = i;
			}
		}
		//еп╤о
		if(max > nums.size()/2)
			return nums[index];
		return -1;
    }
};



#endif