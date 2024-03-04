#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    int N, Q;
    cin >> N >> Q;
    string palabra;
    cin >> palabra;
    long long p = 0;
    while (Q--)
    {
        int op, x;
        cin >> op >> x;

        if (op == 1)
        {
            p += x;
        }
        else
        {
            long long a = (((x - 1 - p) % N) + N) % N;
            cout << palabra[a] << "\n";
        }
    }
    return 0;
}