#include<iostream>
#include<vector>
#include<map>

using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> duplicates;
        vector<int> ans;

        for(int num:nums){
            duplicates[num]++;
        }

        for(auto mapp:duplicates){
            if(mapp.second>1){
                ans.push_back(mapp.first);
            }
        }

        return ans;

    }
};
int main(){

    return 0;
}
