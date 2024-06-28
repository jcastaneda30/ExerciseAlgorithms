#include<iostream>
#include<vector>

using namespace std;

vector<long long> t;

void build(const vector<int>& a, int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] + t[v*2+1];
    }
}

long long sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> values(n);
    t.resize(4 * n);  
    for(int i = 0; i < n; i++) cin >> values[i];
    build(values, 1, 0, n-1);
    for(int i = 0; i < q; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1) {
            update(1, 0, n-1, b-1, c); 
        } else {
            cout << sum(1, 0, n-1, b-1, c-1) << "\n";
        }
    }
    return 0;
}
