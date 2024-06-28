#include<iostream>
#include<string>
#include<algorithm>
#include<vector>


using namespace std;
long long Todias(int dia, int mes,int  year, vector<int> &dias, long long diasYear){
    long long diasEnYears = (year-1)*diasYear;
    long long mesesEnDias = 0;
    for(int i=0;i<mes-1;i++){
        mesesEnDias+=dias[i];
    }
    return dia+mesesEnDias+diasEnYears;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int meses;
    long long diasYear=0;
    cin>>meses;
    vector<int> mesesYear(meses);
    for(int i=0;i<meses;i++){
        cin>>mesesYear[i];
        diasYear=diasYear+(mesesYear[i]);
    }
    int diasIn,mesIn,YearIn,diasEnd,mesEnd,YearEnd;
    cin>>diasIn>>mesIn>>YearIn;
    cin>>diasEnd>>mesEnd>>YearEnd;
    long long Inicio = Todias(diasIn,mesIn,YearIn,mesesYear,diasYear);
    long long Fin = Todias(diasEnd,mesEnd,YearEnd,mesesYear,diasYear);
    long long diff = Fin-Inicio;
    cout<<diff<<endl;
}
