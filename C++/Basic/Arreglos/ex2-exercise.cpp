#include<iostream>
using namespace std;

int main(){
    int vector[]={1,2,3,4,5,6,7,8,9,10};
    int vector2[10];
    int max=0;
    for(int i=0;i<10;i++){
        vector2[i]=vector[9-i];
    }
    cout << "Elementos de vector2 en orden inverso: ";
    for (int i = 0; i < 10; i++) {
        cout << vector2[i] << " ";
    }
    return 0;
}