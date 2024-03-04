#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string n, m;
    cin >> n >> m;
    int coutn = 1;
    set<string> ciclo;
    while (true)
    {
        if (m == n)
        {
            cout << coutn << "\n";
            break;
        }
        else if (coutn > 100)
        {
            cout << "I’m bored"<< "\n";
            break;
        }
        vector<int> values(10, 0);

        for (int i = 0; i < n.size(); i++)
        {   
            values[(int)n[i]-'0']++;
        }
        string nuevoN = "";
        for (int i = 0; i < values.size(); i++)
        {
            if (values[i] != 0)
            {
                string cantidad = to_string(values[i]);
                nuevoN += cantidad + to_string(i);
            }
        }
        if(ciclo.count(nuevoN)>=1){
            cout << "Does not appear" << "\n";
            break;
        }
        n = nuevoN;
        ciclo.insert(n);
        coutn++;
    }

    return 0;
}
