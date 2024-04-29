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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> full(10, 0);
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            full[value % 10]++;
        }

        bool monda = false;
        for (int i = 0; i < 10; i++)
        {
            if(full[i]==0) continue;
            full[i]--;
            for (int j = 0; j < 10; j++)
            {
                if(full[j]==0) continue;
                full[j]--;
                for (int k = 0; k < 10; k++)
                {
                    if(full[k]==0) continue;
                    if((i+j+k)%10==3)monda=1;
                }
                full[j]++;
            }
            full[i]++;
        }
        cout<<(monda ? "YES":"NO")<<'\n';
    }
    return 0;
}