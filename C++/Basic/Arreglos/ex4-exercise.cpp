#include<iostream>
using namespace std;

int main(){
    int array[100];
    int array2[100];
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    for(int i=0;i<5;i++){
        array2[i]=array[i]*2;
    }
    for(int i=0;i<5;i++){
        cout<<endl<<array2[i]<<endl;
    }
    return 0;
}