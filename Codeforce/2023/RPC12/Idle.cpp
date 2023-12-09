#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    deque<int> procesos;
    for (int i = 0; i < n; i++)
    {
        int monda;
        cin >> monda;
        procesos.push_back(monda);
    }

    vector<int> en_procesamiento;
    int maximo;

    if (k == 1)
    {
        maximo = *max_element(procesos.begin(), procesos.end());
    }
    else
    {
        maximo = -1;
    }

    while ((!procesos.empty() || !en_procesamiento.empty()))
    {   
        int hptaQueEsEsaMOndaALobien =k - en_procesamiento.size();
        for (int i = 0; i < k - en_procesamiento.size(); i++)
        {
            if (!procesos.empty())
            {
                en_procesamiento.push_back(procesos.front());
                procesos.pop_front();
            }
        }

        int value = *min_element(en_procesamiento.begin(), en_procesamiento.end());

        vector<int> auxiliar;
        for (auto valor : en_procesamiento)
        {
            if (valor - value > 0)
            {
                auxiliar.push_back(valor - value);
            }
        }

        en_procesamiento = auxiliar;


        maximo = max(maximo, value);
    }

    cout << maximo << endl;

    return 0;
}
