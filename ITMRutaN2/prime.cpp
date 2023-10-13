#include<iostream>
#include<vector>

using namespace std;



void recursion(vector<vector<int>> &todos,vector<int>& primos, vector<int>&lista,int a,int &values){
    bool atras = false;
    if(a==values+1){
        todos.push_back(lista);
    }
    else if(a!=values){        
        for(int i=a;i<values;i++){
            atras = false;
            lista.push_back(i);
            for(int valor:primos) {
                if((lista[i-2]+lista[i-1])==valor) {
                    cout<<valor<<endl;
                    atras= true;}
            }
            if(atras){
                cout<<a<<endl;
                recursion(todos,primos,lista,a+1,values);
                lista.pop_back();
            }
        }
    }
    else if(a==values){
        for(int i=1;i<values;i++){
            atras = false;
            bool adelante = false;
            for(int valor:lista) {
                    if(i==valor) continue;
                }
            if(i>0){
                lista.push_back(i);
                for(int valor:primos) {
                    if((lista[i-2]+lista[i-1])==valor  && lista[i-2]!=lista[i-1]) atras= true;
                    if((lista[0]+lista[i-1])==valor && lista[0]!=lista[i-1]) adelante = true;
                }
                if(atras && adelante){
                    recursion(todos,primos,lista,a+1,values);
                }
            }
        }
    }
}
int main(){
    int values;
    vector<int> primos = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while(cin>>values){
        vector<vector<int>> todos;
        vector<int> listas={1};
        recursion(todos,primos,listas,2,values);
        for(int i=0;i<todos.size();i++){
            for(int j=0;j<values;j++){
                cout<<todos[i][j] << " ";
            }
            cout<<endl;
        }
    }   
    return 0;
}