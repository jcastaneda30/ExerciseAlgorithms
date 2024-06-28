#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int N;
    cin >> N;
    long long valor = 3;
    long long a = 1, b = 1, c = 1;
    string reputit = "11";
    int countern = N - 1;

    while (countern > 1) {
        a = stoll(reputit);
        countern--;
        valor = a + b + c;

        if (countern > 1) {
            b = stoll(reputit);
            countern--;
            valor = a + b + c;
        } else {
            break;
        }

        if (countern > 1) {
            c = stoll(reputit);
            countern--;
            valor = a + b + c;
        } else {
            break;
        }

        reputit += '1';
    }

    cout << valor << endl;
    return 0;
}
