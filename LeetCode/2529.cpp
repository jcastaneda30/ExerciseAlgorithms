#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        if(nums[0]==nums[nums.size()-1] && nums[0]==0) return 0;
        int left=0;
        int right=nums.size()-1;
        int mid=0;
        int posPlus=0;
        while(left<=right){
            mid=left+(right-left)/2;
            if(nums[mid]>0){
                posPlus=mid;
                
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        left=0;
        right=nums.size()-1;
        int posNeg=0;
        while(left<=right){
            mid=left+(right-left)/2;
            if(nums[mid]<0){
                posNeg=mid;
                left=mid+1;
                cout<<mid<<endl;
            }else{
                right=mid-1;
            }

        }
        int ans=0;
        if(posNeg+1>nums.size()-posPlus) ans=posNeg+1;
        else ans=nums.size()-posPlus;
        return ans;
        
    }
};

int main(){
    vector<int> a={-2,-1,-1,0,1,2,3};
    Solution b;
    int aa=b.maximumCount(a);
    return 0;
}