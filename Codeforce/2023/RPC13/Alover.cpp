#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string a, b, c;
    int cadena1, cadena2, cadena3, cadena4, cadena5, cadena6, value;
    cin >> a >> b >> c;

    cadena1 = (a + b + c);
    cadena2 = (a + c + b);
    cadena3 = (b + a + c);
    cadena4 = (b + c + a);
    cadena5 = (c + a + b);
    cadena6 = (c + b + a);

    value = max(cadena1, max(cadena2, max(cadena3, max(cadena4, max(cadena5, cadena6)))));
    cout << value << endl;

    return 0;
}
