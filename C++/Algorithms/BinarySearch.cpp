#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int rigt=nums.size()-1;
        while(left<=rigt){
            int mid=(left+rigt)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) rigt=mid-1;
            else left=mid+1;
        }
        return -1;
    }
};