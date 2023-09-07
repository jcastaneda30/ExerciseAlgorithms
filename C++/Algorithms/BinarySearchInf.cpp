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
            if(nums[mid]<=target) left=mid+1;
            if(nums[mid]>target) rigt=mid-1;
        }
        return left-1;
    }
};

int main(){
    vector<int> a={0,2,3,4,6,7,8,9};
    Solution was;
    int holy=was.search(a,9);
    cout<<holy;
    return 0;
}