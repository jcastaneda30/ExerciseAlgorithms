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
    int N, K;
    cin >> N >> K;
    vector<vector<int>> campo(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> campo[i][j];
        }
    }
    int counter = 0;
    if (N == K)
    {
        int actually = campo[0][0];
        if (campo[0][K - 1] == actually && campo[K - 1][0] == actually && campo[K - 1][K - 1] == actually)
        {
            counter++;
        }
    }

    else for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int actually = campo[i][j];
            if (j + K -1 > N - 1 || i + K -1 > N - 1)
            {
                break;
            }
            if (campo[i][j + K - 1] == actually && campo[i + K - 1][j] == actually && campo[i + K - 1][j + K - 1] == actually)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;

    return 0;
}