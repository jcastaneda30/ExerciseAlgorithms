#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int> groups;
    for(int i=0;i<n;i++) {
        int values;
        cin>>values;
        groups[values]++;}

    int counter =0;
    counter+=groups[4];
    counter+=groups[3];
    if(groups[1]>=groups[3]) groups[1]=groups[1]-groups[3];
    else groups[1] = 0;
    counter+=groups[1]/4;
    groups[1]=groups[1]%4;
    counter+=groups[2]/2;
    groups[2] = groups[2]%2;
    if(groups[2]>0) {
        counter+=1;
        if(groups[1]>2) groups[1]=1;
        else groups[1]=0;
        if(groups[1]) counter++;
    }else if(groups[1]>0) counter++;
    cout<<counter<<endl;
    return 0;
}
