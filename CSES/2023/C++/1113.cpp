// https://cses.fi/problemset/task/1091

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,n;
    cin>>x>>n;
    set<int> luces{0,x};
    multiset<int> distancias{x};
    for(int i=0;i<n;i++){
        int pos;
        cin>>pos;

        auto it1 = luces.upper_bound(pos);
        auto it2 = it1;
        it2--;

        distancias.erase(distancias.find(*it1-*it2));
        distancias.insert(pos-*it2);
        distancias.insert(*it1-pos);
        luces.insert(pos);

        auto asn = distancias.end();
        asn--;
        cout<<*asn<<' ';
    }
    cout<<endl;
    return 0;
}