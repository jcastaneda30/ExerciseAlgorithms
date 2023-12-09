#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long N, W;
    cin >> N >> W;
    vector<pair<long long, long long>> cheese;
    for (long long i = 0; i < N; i++)
    {
        long long A, B;
        cin >> A >> B;
        cheese.push_back(make_pair(A, B));
    }
    sort(cheese.begin(), cheese.end());
    long long delicious = 0;

    for (long long i = N - 1; i >= 0; i--)
    {

        if (W >= cheese[i].second)
        {
            W -= cheese[i].second;
            delicious += cheese[i].second * (cheese[i].first);
        }
        else
        {
            delicious += cheese[i].first * W;
            W = 0;
            break;
        }
    }
    cout << delicious << endl;
    return 0;
}