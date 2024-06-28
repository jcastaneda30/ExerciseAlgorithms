#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// Function to implement upper_bound
int findLowerBound(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid + 1;
            result = mid;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
 
int main(){
    int N,M;
    cin>>N>>M;
    vector<int> valores(N);
    for(int i=0;i<N;i++) cin>>valores[i];
    sort(valores.begin(),valores.end());
    int lenghtt=0;
    int newIndexDown=0;
    for(int i=0;i<N;i++){
        lenghtt=max(lenghtt,findLowerBound(valores,valores[i]+M-1)-i+1);    
    }
    cout<<lenghtt<<endl;
}