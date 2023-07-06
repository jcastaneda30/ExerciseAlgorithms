#include<iostream>
using namespace std;

int main(){
    int numeros[]={21,2,53,5,4,687,3,1,584,9873,14,56,469,87,654},max=INT_MIN;
    for(int i:numeros){
        if(i>max){
            max=i;
        }
    }
    cout<<max;
    return 0;
}