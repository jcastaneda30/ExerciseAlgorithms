#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> cadenas(n);
        for (auto &tt : cadenas) cin >> tt;

        int x = 0, y = 0;
        bool found = false;  
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (cadenas[i][j] == '#') {
                    int counter = 0;
                    int k = i;  

                    
                    while (k < n && cadenas[k][j] == '#') {
                        counter++;
                        k++;
                    }

                    
                    y = i + counter / 2;
                    x = j;
                    found = true;  
                    break;
                }
            }
            if (found) break;  
        }
        cout << y+1 << ' ' << x+1 << '\n';
    }
    return 0;
}
