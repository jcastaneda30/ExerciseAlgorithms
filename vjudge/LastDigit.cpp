#include <iostream>

using namespace std;

int exponenciacion(long long base, long long exponente, long long modulo)
{
    base %= modulo;
    long long res = 1;
    while (exponente > 0)
    {
        if (exponente & 1)
        {
            res = (res * base) % modulo;
        }
        base = (base * base) % modulo;
        exponente >>= 1;
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<exponenciacion(a,b,10)<<endl;
    }
}