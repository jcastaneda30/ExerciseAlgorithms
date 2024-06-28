#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long x, y, z;
        long long k;
        cin >> x >> y >> z >> k;

        long long max_positions = 0;
        for(int a = 1;a<=x;a++){
            if(k%a!=0) continue;
            long long k_a = k/a;
            for(int b=1;b<=y;b++){
                if(k_a%b!=0) continue;
                long long c = k_a/b;
                if(c>z) continue;
                long long posibilities = (x-a+1)*(y-b+1)*(z-c+1);
                max_positions = max(max_positions,posibilities);

            }
        }


        cout << max_positions << '\n';
    }

    return 0;
}
