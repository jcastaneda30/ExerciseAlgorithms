#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int s,n,X,Y;
    cin>>s>>n;
    vector<vector<int>> array;
    vector<int> finalValue(n,0);
    for(int i=0;i<n;i++){
        cin>>X>>Y;
        array.push_back({X,Y});
    }
    int count=0;
    int max=0;
    for(int i=0;i<101;i++){
        
        for(int k=0;k<101;k++){
            count=0;
            for(vector<int> arra:array){
                if(i <= arra[0] && arra[0]<= i + s && k <= arra[1] && arra[1]<= k + s){
                    count++;
                }
            }
            max = std::max(max, count);
        }
        
    }
    cout<<max<<endl;
    return 0;
}