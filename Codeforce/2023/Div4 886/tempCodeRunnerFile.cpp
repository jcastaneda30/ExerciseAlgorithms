#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> problems;
        for (int i = 0; i < n; i++) {
            int elemento;
            cin>>elemento;
            problems.push_back(elemento);
        };

        sort(problems.begin(), problems.end());
        int g=n;
        int hola=0;
        while (g > 1) {
            int diff = problems[hola + 1] - problems[hola];
            if (diff > k && hola <= problems.size() - 1) {
                problems.insert(problems.begin() + hola + 1, 0);
                g++;
                hola++;
                n++;
            }
            hola++;
            g--;
        }
        vector<int> secuencias;
        int count=0;
        for(int tr=0;tr<n;tr++){
            if(problems[tr]!=0 && tr!=n-1){
                count++;
            }else{
                if(problems[tr]!=0) count++;
                secuencias.push_back(count);
                count=0;
            }
        }
        int max_element_iter = *max_element(secuencias.begin(), secuencias.end());
        int suma=0;
        for(int tt=0;tt<secuencias.size();tt++) suma+=secuencias[tt];
        cout<<suma-max_element_iter<<"\n";
    }

    return 0;
}
