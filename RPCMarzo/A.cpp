#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long> values(t);
    for (auto &k : values)
        cin >> k;
    long long l = 0, r = t - 1, counter = 0;
    while (l < r)
    {
        if (values[l] == values[r])
            l++, r--;

        else if (values[l] < values[r])
        {
            values[l + 1] += values[l];
            l++;
            counter++;
        }
        else
        {
            values[r - 1] += values[r];
            r--;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}