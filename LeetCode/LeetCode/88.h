#pragma once
#ifndef _88_H_
#define _88_H_

#include <vector>
using namespace std;


class Solution
{
public:

	/*
	 * 一般方法，常规思路
	 */
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		/*if(n == 0)
			return;
		else if(m == 0){
			for(int i = 0; i < n; i++)
				nums1[i] = nums2[i];
			return;
		}
        if(nums2[n - 1] < nums1[0]){
			nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
			nums1.erase(nums1.begin() + m + n, nums1.end());
			return;
		}else if(nums1[m - 1] < nums2[0]){
			nums1.insert(nums1.begin() + m, nums2.begin(), nums2.end());
			nums1.erase(nums1.begin() + m + n, nums1.end());
			return;
		}*/
		int i = 0, j = 0;
		vector<int> temp;
		while(i < m && j < n){
			if(nums1[i] < nums2[j])
				temp.push_back(nums1[i++]);
			else
				temp.push_back(nums2[j++]);
		}
		while(i < m)
			temp.push_back(nums1[i++]);
		while(j < n)
			temp.push_back(nums2[j++]);
		//打印回结果
		nums1 = temp;
    }


	/*
	 * 大神有4行代码解决战斗的，可以学习
	 */


};


#endif