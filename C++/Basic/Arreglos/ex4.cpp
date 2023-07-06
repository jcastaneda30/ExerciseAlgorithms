#include<iostream>
using namespace std;

int main(){
    char array1[]={'g','e','f','d','c','b','a'};
    char array2[]={'s','d','g','g','a','b','l'};
    char array[14];
    for(int i=0;i<7;i++){
        array[i]=array1[i];
        array[7+i]=array2[i];
    }
    for(int i=0;i<14;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}