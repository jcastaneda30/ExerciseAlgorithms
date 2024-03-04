#include <iostream>
#include <string>
using namespace std;

int comprobante(string &cadena, int k, int index)
{
    int antes = 0;
    if (index - k < 0)
        return -1;
    for (int i = index; i >= index - k; i--)
    {
        if (cadena[i] == '1')
        {
            antes = i;
            break;
        }
        antes = i;
    }

    return antes;
}
int comprobanteDelante(string &cadena, int k, int index)
{
    int antes = 0;
    if (index + k >= cadena.size())
        return -1;
    for (int i = index; i <= index + k; i++)
    {
        if (cadena[i] == '1')
        {
            antes = i;
            break;
        }
        antes = i;
    }
    return antes;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, t, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string cadena;
        cin >> cadena;
        int counter = 0, inicio = 0,fin=0;
        bool uno = true;
        if (cadena[0] == '0' && comprobanteDelante(cadena, k, 0) == k )
        {
            counter += 1;
            cadena[0] = '1';
            inicio += k;
        }
        if (cadena[n-1] == '0' && comprobante(cadena, k, n-1) == k)
        {
            counter += 1;
            cadena[n-1] = '1';
        }
        for (int i = 0; i < n; i++)
            if (cadena[i] == '1')
                uno = false;
        cout<<cadena<<endl;
        for (int i = inicio; i < n; i++)
        {
            if (cadena[i] == '1')
            {
                i += k;
            }
            if (cadena[i] == '0')
            {
                int waos = comprobante(cadena, k, i);

                if (i - waos == k  && waos != -1)
                {
                    
                    int waos2 = comprobanteDelante(cadena, k, i);
                    cout<<i<<' '<<waos2<<endl;
                    if (waos2 - i == k && waos2 != -1)
                    {
                        counter++;
                        i = waos2;
                    }
                    else if (waos2 - i < k && waos2 != -1)
                    {
                        i = waos2;
                    }
                }
                else if (i - waos < k && waos != -1)
                {
                    if (i != waos)
                        i = waos;
                }
            }
        }

        if (n <= k && uno)
            counter = 1;
        else if (n <= k && !uno)
            counter = 0;
        std::cout << counter << endl;
    }

    return 0;
}