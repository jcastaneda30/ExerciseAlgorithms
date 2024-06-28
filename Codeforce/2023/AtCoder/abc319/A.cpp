#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string,int> nombres;
    nombres["tourist"] = 3858;
    nombres["ksun48"] = 3679;
    nombres["Benq"] = 3658;
    nombres["Um_nik"] = 3648;
    nombres["apiad"] = 3638;
    nombres["Stonefeang"] = 3630;
    nombres["ecnerwala"] = 3613;
    nombres["mnbvmar"] = 3555;
    nombres["newbiedmy"] = 3516;
    nombres["semiexp"] = 3481;
    string nombre;
    cin>>nombre;
    cout<<nombres[nombre]<<"\n";
    return 0;
}