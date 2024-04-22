#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S, M, L;
    cin >> N >> S >> M >> L;

    int ans = 1e6;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            for (int k = 0; k < 101; k++)
            {
                int value = i*6+j*8+k*12;
                if(value>=N){
                    ans=min(S*i+M*j+L*k,ans);
                }  
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
