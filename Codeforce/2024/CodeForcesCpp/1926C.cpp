#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;
int sumOfDigits(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}
int main()
{
    long long ans = 0;
    vector<int> monda(1000000 + 1, 0);
    for (int i = 1; i <= 1000000; i++)
    {
        ans += sumOfDigits(i);
        monda[i] = ans;
    }
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin >> N;
    while (N--)
    {
        int values;
        cin >> values;
        cout << monda[values] << endl;
    }
    return 0;
}