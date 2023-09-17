#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    float minMultipli = ceil((float)a/(float)c)*(float)c;
    if (minMultipli<=b){
        cout<<(int)minMultipli<<endl;
    }else{
        cout<<"-1\n";
    }

    return 0;
}