#include <iostream>
#include <vector>
//
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> values(n);
        int suma = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> values[i];
            suma += values[i];
        }
        for (int j = n; j > 0; j--)
        {
            bool sirve = true;
            if (suma % j == 0)
            {
                int sumaActual = 0, sumaObjetivo = suma / j;
                for (int k = 0; k < n; k++)
                {
                    sumaActual += values[k];
                    if (sumaActual > sumaObjetivo)
                    {
                        sirve = false;
                        break;
                    }
                    else if (sumaActual == sumaObjetivo)
                    {
                        sumaActual = 0;
                    }
                }
                if (sirve)
                {
                    cout << n - j << endl;
                    break;
                }
            }
        }
    }
}