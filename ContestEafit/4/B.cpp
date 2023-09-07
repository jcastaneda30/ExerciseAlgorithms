#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, m;
    cin >> n >> m;

    int a = n;
    int b = m;
    vector<string> cadena;
    bool turno = true;

    if (n == m) {
        for (int i = 0; i < a + b; i++) {
            if (turno) {
                cadena.push_back("B");
                turno = false;
            } else {
                cadena.push_back("G");
                turno = true;
            }
        }
    } else if (n > m) {
        for (int i = 0; i < a + b; i++) {
            if (turno || m == 0) {
                if (n > 0)
                    n--;
                cadena.push_back("B");
                turno = false;
            } else if (m > 0) {
                m--;
                cadena.push_back("G");
                turno = true;
            }
        }
    } else {
        for (int i = 0; i < a + b; i++) {
            if (turno || n == 0) {
                m--;
                cadena.push_back("G");
                turno = false;
            } else if (n > 0) {
                n--;
                cadena.push_back("B");
                turno = true;
            }
        }
    }

    for (string letra:cadena) {
        cout << letra;
    }
    return 0;
}
