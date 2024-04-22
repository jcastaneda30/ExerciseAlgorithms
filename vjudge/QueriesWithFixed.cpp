#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> values(n);
    for (int &t : values)
        cin >> t;

    for (int i = 0; i < q; i++)
    {
        stack<pair<int, int>> st;
        int value;
        cin >> value;

        for (int j = 0; j < n; j++)
        {
            int maximun;
            stack<pair<int, int>> s1;
            for (int t = j; t < j + value && j + value <= n; t++)
            {
                int new_element = values[t];
                maximun = s1.empty() ? new_element : max(new_element, s1.top().second);
                s1.push({new_element, maximun});
            }
            if (!s1.empty())
                maximun = s1.top().second;
            else
                maximun = 1e7;
            int new_min = st.empty() ? maximun : min(maximun, st.top().second);
            st.push({maximun, new_min});
        }
        cout << st.top().second << endl;
    }
    return 0;
}