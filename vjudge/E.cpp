#include<iostream>
#include<algorithm>

using namespace std;

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int A,B;
    cin>>A>>B;
    int valor = min(A,B);
    long long value = factorial(valor);
    cout<<value<<endl;
    return 0;
}