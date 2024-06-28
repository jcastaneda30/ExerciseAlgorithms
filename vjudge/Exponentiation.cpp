#include<iostream>

using namespace std;

long long binPow(long long base, long long exponente, long long modulo) {
    base %= modulo;
    long long res = 1;
    while (exponente > 0) {
        if (exponente & 1) {
            res = (res * base) % modulo; 
        }
        base = (base * base) % modulo;
        exponente >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << binPow(a, b, 1e9 + 7) << endl;
    }
    return 0;
}
