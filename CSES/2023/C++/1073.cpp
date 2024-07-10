

// https://cses.fi/problemset/task/1630

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    multiset<int> values;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        auto it = values.upper_bound(value);
        if(it != values.end())values.erase(it);
        values.insert(value);
    }
    std::cout<<(int)values.size()<<endl;
    return 0;
}