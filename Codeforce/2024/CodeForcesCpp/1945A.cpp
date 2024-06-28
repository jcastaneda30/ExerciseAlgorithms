#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <cmath>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (b % 3 != 0 && c < 3 - b % 3)
        {
            cout << -1 << endl;
            continue;
        }
        long long tents = a;
        tents += b / 3;
        c+=b%3;
        tents += c/3;
        if(c%3)tents++;
        cout << tents << endl;
    }
    return 0;
}