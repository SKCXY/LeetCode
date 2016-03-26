#pragma once
#ifndef _118_H_
#define _118_H_

/*
 * Pascal's Triangle(Ñî»ÔÈý½Ç)
 */

#include <vector>
using namespace std;

class Solution
{
public:
	vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
		for(int i = 1; i <= numRows; i++){
			vector<int> temp;
			for(int j = 1; j <= i; j++){
				if(j == 1 || j == i)
					temp.push_back(1);
				else
					temp.push_back(result[i-2][j-2] + result[i-2][j-1]);
			}
			result.push_back(temp);
		}
		return result;
    }
};


#endif