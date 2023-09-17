#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;

vector<long long> precalculate(){
    long long numero = 1000001;
    vector<bool> waos(numero,false);

    for(int i=2;i*i<numero;i++){
        if(!waos[i]){
            for(int j=i*i; j<numero; j+=i){
                waos[j]=true;
            }
        }
    }
    waos[0]=true;
    waos[1]=true;
    set<long long> waos2; // Usamos un set en lugar de un vector para eliminar elementos duplicados
    for (long long k = 0; k < numero; k++) {
        if (!waos[k]) waos2.insert(static_cast<long long>(k) * k);
    }
    return vector<long long>(waos2.begin(), waos2.end()); // Convertimos el set en un vector para devolverlo
}

bool search(vector<long long>& nums, long long target) {
    int left=0;
    int rigt=nums.size()-1;
    while(left<=rigt){
        int mid=(left+rigt)/2;
        if(nums[mid]==target) return true;
        if(nums[mid]>target) rigt=mid-1;
        else left=mid+1;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    vector<long long> b=precalculate();
    sort(b.begin(), b.end());
    for(int i=0;i<t;i++){
        long long a;
        cin>>a;
        if(search(b,a)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}