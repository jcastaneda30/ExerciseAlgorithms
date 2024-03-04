#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int N, X;

    cin >> N >> X;

    vector<int> valores(N);

    for (int i = 0; i < N; i++)
        cin >> valores[i];

    vector<long long> prefix(N);

    prefix[0] = valores[0];

    for (int i = 1; i < N; i++)
    {
        prefix[i] = prefix[i - 1] + valores[i];
    }

    unordered_map<long long, int> apariciones;
    long long respuesta = 0;

    apariciones[0] = 1;
    for (int i = 0; i < N; i++)
    {
        respuesta += apariciones[prefix[i] - X];
        apariciones[prefix[i]]++;
    }
    cout << respuesta << endl;

    return 0;
}