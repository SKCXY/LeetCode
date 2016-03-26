#pragma once
#ifndef _165_H_
#define _165_H_

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
		if(version1.empty() || version2.empty())
			return 0;
		
		vector<int> versionRes1,versionRes2;
		splitStr(version1, versionRes1);
		splitStr(version2, versionRes2);

		if(versionRes1[0] > versionRes2[0])
			return 1;
		else if(versionRes1[0] < versionRes2[0])
			return -1;
		else{
			cout << versionRes1.size() << endl;
			if(versionRes1.size() == versionRes2.size()){
				if(versionRes1.size() == 1)
					return 0;
				else if(versionRes1.size() == 2){
					if(versionRes1[1] > versionRes2[1])
						return 1;
					else if(versionRes1[1] < versionRes2[1])
						return -1;
					else
						return 0;
				}
				
			}else if(versionRes1.size() > versionRes2.size())
				return 1;
			else
				return -1;
		}

    }
	void splitStr(string &version, vector<int> &result)
	{
		int i = 0, flag;
		int res = 0;
		while(i != version.size() && version[i] != '.' )
		{
			res = res*10 + (version[i] - '0');
			i++;
		}
		result.push_back(res);
		if(i == version.size())
			return;
		else{
			i++;
			res = 0;
			while(i != version.size()){
				res = res*10 + (version[i] - '0');
				i++;
			}
			result.push_back(res);
		}
	}


	/*int compareVersion(string version1, string version2) {

        string v1 = version1;
        string v2 = version2;

        if(v1.length() == 0 || v2.length() == 0)
            return 0;

        int i=0;
        int j=0;

        int n1;
        int n2;

        while(i<v1.length() || j<v2.length())
        {
            n1 = 0;
            n2 = 0;

            while(i<v1.length() && v1[i] != '.')
            {
                n1 = n1*10+(v1[i]-'0');
                i++;
            }

            while(j<v2.length() && v2[j] != '.')
            {
                n2 = n2*10+(v2[j]-'0');
                j++;
            }

            if(n1>n2)
                return 1;
            else if(n1<n2)
                return -1;

            if(v1[i] == '.')
                i++;
            if(v2[j] == '.')
                j++;
        }

        return 0;
    }
*/
};



#endif