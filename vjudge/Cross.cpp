#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    int N, K, B;
    cin >> N >> K >> B;
    vector<bool> senhales(N + 1, false);
    vector<int> section(N + 1, 0);

    for (int i = 0; i < B; i++)
    {
        int malas;
        cin >> malas;
        senhales[malas] = true;
    }

    for (int i = 0; i < N + 1; i++)
    {
        if (senhales[i+1])
        {
            section[i + 1] = section[i] + 1;
        }
        else
        {
            section[i + 1] = section[i];
        }
    }

    int mini = 2147483647;

    for (int i = 1; i < N + 1 - K; i++)
    {

        mini = min(mini, section[i + K] - section[i]);
    }

    if (N == K)
    {
        cout << B << endl;
    }
    else
    {
        cout << mini << endl;
    }

    return 0;
}
