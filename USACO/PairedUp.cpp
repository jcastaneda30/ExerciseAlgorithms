#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    setIO("pairup");
    int n;
    cin >> n;
    vector<pair<int, int>> milk;
    for (int i = 0; i < n; i++) {
        int qa, m;
        cin >> qa >> m;
        milk.push_back({m, qa});
    }
    sort(milk.begin(), milk.end());

    int minimum = 0; 
    int l = 0, r = n- 1,counterL=0,counterR=0;
    while (l <= r) { 
        minimum = max(minimum, milk[l].first + milk[r].first);
        counterL++,counterR++;
        if (counterR > milk[r].second) {
            counterR=0;
            r--;
        } 
        if (counterL > milk[l].second) {
            counterL=0;
            l++;
        } 
    }
    cout << minimum << endl;
    return 0;
}