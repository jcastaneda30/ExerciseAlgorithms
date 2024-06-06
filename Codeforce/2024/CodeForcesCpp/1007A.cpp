#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> valores(n);
    map<int, set<int>> posiciones;

    for(int i = 0; i < n; i++) {
        cin >> valores[i];
    }
    sort(valores.begin(),valores.end());
    long long counter = 0;
    for(int i = 0,j=1; i < n && j < n;) {
        if(valores[i]<valores[j]){
            i++;
            counter++;
        }
        j++;
    }

    cout << counter << endl;

    return 0;
}
