#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin >> N;
    vector<pair<char, int>> valores;
    for (int i = 0; i < N; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        valores.push_back(make_pair(a, b));
    }
    int ans = 1e9 + 1;
    for (int i = 0; i < N; i++)
    {
        int counter = 1e9 + 1;
        for (int j = 0; j < N; j++)
        {
            if (j == i)
                continue;
            if (valores[i].first == 'G')
            {

                if (valores[j].first == 'L' && valores[i].second > valores[j].second )
                {
                    if (counter == 1e9 + 1)
                        counter = 0;
                    counter++;
                }

                else if (valores[j].first == 'G' && valores[i].second < valores[j].second )
                {
                    if (counter == 1e9 + 1)
                        counter = 0;
                    counter++;
                }
            }
            else
            {
                if (valores[j].first == 'G' && valores[i].second < valores[j].second)
                {
                    if (counter == 1e9 + 1)
                        counter = 0;
                    counter++;
                }
                if (valores[j].first == 'L' && valores[i].second > valores[j].second)
                {
                    if (counter == 1e9 + 1)
                        counter = 0;
                    counter++;
                }
            }
        }
        ans = min(ans, counter);
    }
    if (ans == 1e9 + 1)
        ans = 0;
    cout << ans << "\n";

    return 0;
}