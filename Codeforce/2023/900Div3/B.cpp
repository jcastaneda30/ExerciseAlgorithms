#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> jajs;
        jajs.push_back(2);
        jajs.push_back(4);
        jajs.push_back(6);
        int index = 2;
        if((3*jajs[index]%(jajs[index-2]+jajs[index-1]))==0){
                jajs[index-2]+=2;
                jajs[index-1]+=1;
                jajs[index]+=5;
        }
        while(index<n-1){
            if((3*jajs[index]%(jajs[index-2]+jajs[index-1]))==0){
                jajs[index-2]+=2;
                jajs[index-1]+=1;
                jajs[index]+=5;
            }else{
                jajs.push_back(jajs[index]+2);
                index++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<jajs[i]<<" ";
        }
        cout<<endl;
    }
}
