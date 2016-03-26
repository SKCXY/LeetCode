#ifndef _209_H_
#define _209_H_

class Solution {
public:
int minSubArrayLen(int s, vector<int>& nums) {
    if (nums.empty()) return 0;
    int res=INT_MAX;
    int i=0,j=0,sum=nums[0];

    while(j<nums.size()){
        if(sum>=s){
            res = min(res,j-i+1);
            if (res==1) return res;
            sum-=nums[i++];
        }else{
            sum+=nums[++j];
        }
    }
    if (res==INT_MAX) return 0;
    else return res;
}
};


#endif