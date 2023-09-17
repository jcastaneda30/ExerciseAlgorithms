#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarysearh(int a,vector<int> array){
    int r=array.size()-1;
    int l=0;
    int result=-1;
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (array[m] == a){
            result = m;
            r = m - 1; }
 
        // If x greater, ignore left half
        else if (array[m] < a)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return result;
}

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> elemtos(n);
    for(int i=0;i<n;i++) cin>>elemtos[i];
    sort(elemtos.begin(), elemtos.end());
    for(int j=0;j<q;j++){
        int elemento,elemento2;
        int type;
        cin>>type;
        if(type==1){
            int elemento;
            cin>>elemento;
        }else{
            cin>>elemento>>elemento2;
        }
        

    }

    return 0;
}