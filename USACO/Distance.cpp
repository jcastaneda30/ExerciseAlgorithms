#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin>>N;
    vector<int> x;
    vector<int> y;

    for(int i=0;i<N;i++){
        int xx;
        cin>>xx;
        x.push_back(xx);
    }
    for(int i=0;i<N;i++){
        int yy;
        cin>>yy;
        y.push_back(yy);
    }
    long long distance=-1;
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            distance=max((long long)(pow(x[i]-x[j],2)+pow(y[i]-y[j],2)),distance);
        }
    }
    cout<<distance<<endl;
    return 0;
}