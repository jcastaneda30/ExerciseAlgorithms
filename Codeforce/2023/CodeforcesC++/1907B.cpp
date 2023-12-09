#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string palabra;
        cin >> palabra;

        vector<char> actually;
        vector<bool> cuchau(palabra.size(), true);
        vector<int> upper;
        vector<int> lower;
        for (int j = 0; j < palabra.size(); j++) {
            if (palabra[j] == 'b') {
                cuchau[j] = false;
                if(!lower.empty()){
                    cuchau[lower[lower.size()-1]]=false;
                    lower.pop_back();
                }
            } else if (palabra[j] == 'B') {
                cuchau[j] = false;
                if(!upper.empty()){
                    cuchau[upper[upper.size()-1]]=false;
                    upper.pop_back();
                }
            } else {
                if(islower(palabra[j])) lower.push_back(j);
                else upper.push_back(j);
                actually.push_back(palabra[j]);
            }
        }

        for (int i = 0; i < palabra.size(); i++) {
            if (cuchau[i]) {
                cout << palabra[i];
            }
        }

        cout << endl;
    }

    return 0;
}
