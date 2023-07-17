#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int bs_lower_bound(vector<long long> &array, int n, int x) {
    int l = 0;
    int h = n; // Not n - 1
    while (l < h) {
        int mid =  l + (h - l) / 2;
        if (x <= array[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}
int main(){
    long long n,b,m,p,acumulador=0;
    
    cin>>n;
    vector<long long> a(n,0);
    for(int i=0;i<n;i++){
        cin>>b;
        acumulador+=b;
        a[i]=acumulador;
    }

    cin>>m;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cin>>p;
        cout<<bs_lower_bound(a,n,p)+1<<endl;
    }
}