#include <iostream>
#include <vector>

using namespace std;

// Generar primos

vector<int> primos;
vector<bool> is_Prime;
void criba(int n)
{
    vector<bool> valores(n + 1, 1);
    valores[0] = valores[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (valores[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                valores[j] = 0;
            }
        }
    }
    for (int k = 2; k <= n; k++)
    {
        if (valores[k])
        {
            primos.push_back(k);
        }
    }
    is_Prime = valores;
}

// Determinar si un numero es primo

bool esPrimo(long long n)
{
    if (n < (int)is_Prime.size())
        return is_Prime[n];
    for (int i = 0; i < (int)primos.size() && primos[i] * primos[i] <= n; i++)
    {
        if (n % primos[i] == 0)
        {
            return false;
        }
    }
    return true;
}

// Descomposicion en factores

vector<int> factores(long long n)
{
    vector<int> componentes;
    for (int i = 0; i < (int)primos.size() && primos[i] * primos[i] <= n; i++)
    {
        while(n%primos[i]==0){
            componentes.push_back(primos[i]);
            n/=primos[i];
        }

    }
        if(n!=1) componentes.push_back(n);
    return componentes;
}

//Saber cuantos divisores tiene un numero

int cantidadDivisores(long long n){
    int ans = 1;
    for(int i=0;i<(int)primos.size() && primos[i]*primos[i]<=n;i++){
        int counter=0;
        while(n%primos[i]==0){
            n/=primos[i];
            counter++;
        }
        ans*=counter+1;
    }
    if (n!=1) ans*=2;
    return ans;
}

//Suma de los divisores de un numero

int cantidadDivisores(long long n){
    int ans = 1;
    for(int i=0;i<(int)primos.size() && primos[i]*primos[i]<=n;i++){
        long long multiplier=primos[i], total=1;
        while(n%primos[i]==0){
            n/=primos[i];
            total+=multiplier;
            multiplier*=primos[i];
        }
        ans*=total;
    }
    if (n!=1) ans*=(n+1);
    return ans;
}
//Exponenciacion binaria
long long binpow(long long base, long long exponente) {
    long long res = 1;
    while (exponente > 0) {
        if (exponente & 1)
            res = res * base;
        base = base * base;
        exponente >>= 1;
    }
    return res;
}

//Exponenciacion binaria con modulos
long long binpow(long long base, long long exponente, long long modulo) {
    base %= modulo;
    long long res = 1;
    while (exponente > 0) {
        if (exponente & 1)
            res = res * base % modulo;
        base = base * base % modulo;
        exponente >>= 1;
    }
    return res;
}
//Inverso modular
long long inversoModular(long long n, long long modulo){
    return binpow(n,modulo-2,modulo);
}


int main()
{

    return 0;
}