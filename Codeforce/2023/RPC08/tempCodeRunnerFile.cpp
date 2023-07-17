#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int s,n,X,Y;
    cin>>s>>n;
    vector<vector<int>> array;
    vector<int> finalValue;
    for(int i=0;i<n;i++){
        cin>>X>>Y;
        array.push_back({X,Y});
    }
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        vector<int> a=array[i];
        for(int k=0;k<n;k++){
            vector<int> b=array[k];
            if(a[0]<=b[0] && a[0]+s>=b[0] && a[1]<=b[1] && a[1]+s>=b[1]){
                count++;
            }
        }
        
        finalValue.push_back(count);
        
    }
    int max = *max_element(finalValue.begin(), finalValue.end());
    for(int i=0;i<n;i++){
        cout<<finalValue[i]<<" ";
    }
    cout<<max<<endl;
    return 0;
}