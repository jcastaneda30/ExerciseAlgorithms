#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maximo = 0;
        int value = 0;
        for (int x = 2; x <= n; x++)
        {
            int k = n/x;
            int suma = x*k*(k+1)/2;
            if(suma>value){
                value = suma;
                maximo = x;
            } 

        }
        cout<<maximo<<'\n';
    }
    return 0;
}