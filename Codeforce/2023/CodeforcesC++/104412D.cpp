#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N, M;
    cin >> M >> N;
    vector<int> Narray;
    vector<int> Marray;
    for (int i = 0; i < M; i++)
    {
        int a;
        cin >> a;
        Marray.push_back(a);
    }
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        Narray.push_back(a);
    }

    return 0;
}