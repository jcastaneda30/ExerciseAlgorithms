#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> values(n);
    for(int i=0;i<n;i++){
        cin>>values[i];
    }
    int descendencia=0,inicio=-1,fin=-1;
    for(int i=0;i<n-1;i++){
        if(values[i]>values[i+1]){
            if(inicio==-1){
                inicio=i;
                descendencia++;
                fin=i;
            }
            if(fin+1!=i+1) descendencia++;
            fin=i+1;
        }else if(inicio!=-1){
            if(values[inicio]>values[i] && i>fin){
                descendencia++;
            }
        }
    }
    if(values[inicio]>values[n-1] && fin!=n-1){
                descendencia++;
    }
    if(inicio>0){
        if(values[inicio-1]>values[fin]) descendencia++;
    }
    if(descendencia<=1){
        cout<<"yes"<<endl;
        cout<<(inicio < 0 ? 1 : inicio+1)<<' '<<(fin < 0 ? 1 : fin+1)<<endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;
}