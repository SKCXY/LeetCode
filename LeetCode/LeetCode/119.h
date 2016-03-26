#pragma once
#ifndef _119_H_
#define _119_H_

/*
 * Pascal's Triangle II(Ñî»ÔÈý½Ç)
 */

#include <vector>
using namespace std;

class Solution
{
public:
	//vector<int> getRow(int rowIndex) {
	//	rowIndex += 1;
 //       vector<vector<int>> result;
	//	//vector<int> result;
	//	for(int i = 1; i <= rowIndex; i++){
	//		vector<int> temp;
	//		for(int j = 1; j <= i; j++){
	//			if(j == 1 || j == i)
	//				temp.push_back(1);
	//			else
	//				temp.push_back(result[i-2][j-2] + result[i-2][j-1]);
	//		}
	//		if(i == rowIndex)
	//			return temp;
	//		else
	//			result.push_back(temp);
	//	}
 //   }

	//other's code
	vector<int> getRow(int rowIndex) {
		vector<int> res(rowIndex+1,1);
		for (int i=2;i<=rowIndex;i++){
			for (int j=i-1;j>0;j--){
				res[j]=res[j]+res[j-1];
			}
		}
		return res;
	}
};

#endif