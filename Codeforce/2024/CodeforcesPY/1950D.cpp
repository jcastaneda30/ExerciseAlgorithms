#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generar_combinaciones_recursivas(string prefijo, int longitud, vector<int> &lista)
{
    if (longitud == 0)
    {
        lista.push_back(stoi(prefijo));
    }
    else
    {
        generar_combinaciones_recursivas(prefijo + '0', longitud - 1, lista);
        generar_combinaciones_recursivas(prefijo + '1', longitud - 1, lista);
    }
}

int main()
{
    vector<int> lista;
    for (int longitud = 1; longitud <= 5; ++longitud)
    {
        generar_combinaciones_recursivas("", longitud, lista);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int value;
        cin >> value;
        vector<int> valores(lista.size(), 0);
        string copy = to_string(value);
        bool comprobador = false;
        for (int i = 0; i < copy.size(); i++)
        {
            if (copy[i] == '0')
            {
                comprobador = false;
            }
            else if (copy[i] == '1')
            {
                comprobador = false;
                
            }else{
                comprobador=true;
                break;
            }
        }
        if (comprobador)
        {
            valores[0] = value;
            for (int j = 1; j < lista.size(); j++)
            {
                for (int k = 0; k < lista.size(); k++)
                {
                    if (lista[k] != 1 && lista[k] != 0 && value % lista[k] == 0)
                    {
                        value /= lista[k];
                    }
                }
                valores[j] = value;
                if (value == 1 || valores[j] == valores[j - 1])
                {
                    break;
                }
            }
            if (value == 1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}
