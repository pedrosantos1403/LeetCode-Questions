#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> twoSum;
        int sum;

        for(int i = 0 ; i < nums.size() ; i++){

            for(int j = i + 1 ; j < nums.size() ; j++){
                sum = nums[i] + nums[j];
                if(sum == target){
                    twoSum.push_back(i);
                    twoSum.push_back(j);
                    break;
                }
            }

            if(sum == target) break;

        }

        return twoSum;

    }
};