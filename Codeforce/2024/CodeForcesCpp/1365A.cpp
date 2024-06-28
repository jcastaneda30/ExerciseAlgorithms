#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

bool freeOrNot(vector<vector<bool>> &tablero, int row, int col)
{
    int n = tablero.size(), m = tablero[0].size();
    bool free = false;
    for (int i = 0; i < n; i++)
    {
        if (tablero[i][col])
            return false;
    }
    for (int i = 0; i < m; i++)
    {
        if (tablero[row][i])
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<bool>> tablero(n, vector<bool>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                int value;
                cin >> value;
                tablero[i][j] = value;
            }
        bool turno = true;
        for (int i = 0; i < n; i++)
        {      
            bool once = false;
            for (int j = 0; j < m; j++)
            {
                if(tablero[i][j]==0){
                    if(freeOrNot(tablero,i,j)){
                        tablero[i][j]=true;
                        turno = !turno;
                        break;
                    }
                }
            }
        }
        cout<< (turno ? "Vivek" : "Ashish") << "\n";
    }
    return 0;
}