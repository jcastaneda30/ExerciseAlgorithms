#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,count=0;
    string codeforces ="codeforces";
    string cadena;
    cin>>a;
    
    for(int i=0;i<a;i++){
        cin>>cadena;
        for(int j=0;j<10;j++){
            if(codeforces[j]!=cadena[j]){
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
        return 0;
}