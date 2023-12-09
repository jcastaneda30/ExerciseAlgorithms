#include<iostream>

using namespace std;

int binarySearch(int n, int k)
{
    int l,r,m,diff,multiplicacion;
    l=1;
    r=1e9;
    while (l <= r) {
        m = l + (r - l) / 2;
        multiplicacion = m*(m+1)/2;
        diff = n-m;
        // Check if x is present at mid
        if (multiplicacion-diff == k)
            return m;
 
        // If x greater, ignore left half
        if (multiplicacion-diff < k)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<binarySearch(n,k)<<endl;
    return 0;

}