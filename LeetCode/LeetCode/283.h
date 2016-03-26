#pragma once
#ifndef _283_H_
#define _283_H_

/*
 * Move Zeros
 */

#include <vector>
using namespace std;

class Solution
{
public:

	//法一
	/*void moveZeroes(vector<int>& nums) {
		int temp,index = 0;
		for(int i = 0; i < nums.size() - index; i++){
			if(nums[i] == 0){
				for(int j = i + 1; j < nums.size() - index; j++){
					nums[j-1] = nums[j];
				}
				nums[nums.size() - index - 1] = 0;
				i --;
				index ++;
			}
		}
    }*/

	//自己写的哦
	void moveZeroes(vector<int>& nums){
		int index = 0;
		for(int i = 0; i < nums.size(); i++){
			if(nums[i] != 0)
				nums[index ++] = nums[i];
		}
		for(int i = index; i < nums.size(); i++)
			nums[i] = 0;
	}
};


#endif