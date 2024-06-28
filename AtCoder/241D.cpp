#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main()
{
    multiset<int> values;
    int Q;
    cin >> Q;

    while (Q--)
    {
        int Tquery, x, k;
        bool wea=1;
        cin >> Tquery;

        if (Tquery == 1)
        {
            cin >> x;
            values.insert(x);
        }
        else if (Tquery == 2)
        {
            cin >> x >> k;
            auto it = values.upper_bound(x);

            while (k--)
            {
                if(it==values.begin()){
                    wea=0;
                    break;

                }
                it--;
                
            }
            if (wea)
            {
                cout << *it << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            cin >> x >> k;
            auto it = values.lower_bound(x);

            while (--k)
            {   
                if(it==values.end()){ 
                    bool wea=0;
                    break;}
                it++;
                
            }
            if(it==values.end()) wea=0;
            if (wea)
            {
                
                cout << *it << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
