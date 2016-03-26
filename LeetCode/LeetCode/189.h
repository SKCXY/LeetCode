#pragma once
#ifndef _189_H_
#define _189_H_

/*
 * Rotate
 */



#include <vector>
using namespace std;

class Solution
{
public:
	//法一：申请k个额外空间
	//void rotate(vector<int>& nums, int k) {
	//	if(k < nums.size())
	//		fanzhuan(nums, k);
	//	else
	//		fanzhuan(nums, (k % nums.size()));
 //   }

	//void fanzhuan(vector<int>& nums, int k){
	//	vector<int> temp;
	//	for(int i = 0; i < k; i++){
	//		temp.push_back(nums[nums.size() - k + i]);
	//	}
	//	//调换顺序
	//	for(int i = nums.size() - 1; i >= 0 ; i--){
	//		if(i >= k){
	//			nums[i] = nums[i-k];
	//		}else{
	//			nums[i] = temp[i];
	//		}
	//	}
	//}

	//简化
	//void rotate(vector<int>& nums, int k) {
	//	k %= nums.size();
	//	vector<int> temp;
	//	for(int i = 0; i < k; i++){
	//		temp.push_back(nums[nums.size() - k + i]);
	//	}
	//	//调换顺序
	//	for(int i = nums.size() - 1; i >= 0 ; i--){
	//		if(i >= k){
	//			nums[i] = nums[i-k];
	//		}else{
	//			nums[i] = temp[i];
	//		}
	//	}
 //   }

	//vector.insert()
	void rotate(vector<int>& nums, int k) {
		k %= nums.size();
		nums.insert(nums.begin(), nums.end() - k, nums.end());
		nums.erase(nums.end() - k, nums.end());
    }

};



#endif