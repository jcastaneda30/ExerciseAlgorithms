#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    while (Q--) {
        int N, T;
        cin >> N >> T;

        int count = 0;
        int sqrtT = sqrt(T);

        if(T==1){
            cout<<N<<endl;
            continue;
        }
        T--;
        for (int i = 1; i <= sqrtT; i++) {
            if (T % i == 0) {
                if (i <= N) count++;
                if (i != T / i && T / i <= N) count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
