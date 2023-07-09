#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    int T, N;
    vector<int> A;
    cin>>T;
    for(int j=0;j<T;j++){
        cin >> N;
        A.resize(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        bool comprobante = true;
        string perdedor="";
        bool cosa=true;
        bool turno= false; //="Yalalov" true = "Shin"
        while (cosa)
        {
            cout<<"-------------------";
            if(turno){
                if((*min_element(A.begin(),A.end()))==0){
                    auto it = find(A.begin(), A.end(), *max_element(A.begin(),A.end()));
                    if(*it!=0){
                        *it--;
                    }else{
                        perdedor="Shin";
                        break;
                    }
                }else{
                    for(int p=0;p<T;p++){
                        A[p]--;
                    }
                }
            }else{
                if((*min_element(A.begin(),A.end()))==0){
                    auto it = find(A.begin(), A.end(), *max_element(A.begin(),A.end()));
                    cout<<*it;
                    if(*it!=0){
                        *it--;
                        cout<<*it;
                    }else{
                        perdedor="Yalalov";
                        break;
                    }
                }else{
                    for(int k=0;k<T;k++){
                        A[k]--;
                    }
                }
            }
            break;
        }
        cout<<perdedor;
    }
    return 0;
}
