#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{       ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> values(n);
        int mini = 2 * 1e9, posMin = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> values[i];
        }

        long long counter = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if(values[i]<=mini){
                mini=values[i];
            }
            else 
            {   int r=(values[i]-1) / mini;
                counter += r;
                mini = values[i] / (r+1);
            }
        }
        cout << counter << endl;
    }
    return 0;
}