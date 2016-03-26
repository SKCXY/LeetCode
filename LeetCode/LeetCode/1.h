#ifndef _1_H_
#define _1_H_


#include <vector>
#include <unordered_map>
using namespace std;


class Solution
{
public:
	/*vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int>::size_type size = nums.size();
		int firstNum,secondNum;
		vector<int> indices;
		for(vector<int>::size_type i = 0; i < size-1; i++){
			firstNum = nums[i];
			for(vector<int>::size_type j = i + 1; j < size; j++){
				secondNum = nums[j];
				if((firstNum + secondNum) == target){
					indices.push_back(i);
					indices.push_back(j);
					return indices;
				}
			}
		}
		return indices;
	}*/

	vector<int> twoSum(vector<int>& nums, int target){
		int i = 0, n = nums.size();
		unordered_map<int, int> m;
		vector<int> ret;

		for(i = 0; i < n; ++i){
			if(m.find(target - nums[i]) != m.end())
			{
				ret.push_back(m[target - nums[i]]);
				ret.push_back(i);
				break;
			}
			m[nums[i]] = i;
		}
	}

};



#endif