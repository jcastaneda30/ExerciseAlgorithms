//https://vjudge.net/contest/597198#problem/B

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A_i(N);
    for(int i=0;i<N;i++) cin>>A_i[i];

    for(int i=1;i<A_i.size();i++){
        if(A_i[i]-A_i[i-1]>1){
            int a_s = A_i[i-1];
            int diff = A_i[i]-A_i[i-1];
            int apuntador = i;
            for(int j=1;j<diff;j++){
                A_i.insert(A_i.begin()+apuntador+j-1,a_s+j);
                i++;
            }
        }
        
        if(A_i[i-1]-A_i[i]>1){
            int a_s = A_i[i-1];
            int diff = A_i[i-1]-A_i[i];
            int apuntador = i;
            for(int j=1;j<diff;j++){
                A_i.insert(A_i.begin()+apuntador+j-1,a_s-j);
                i++;
            }
        }

    }
    for(int x:A_i){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}