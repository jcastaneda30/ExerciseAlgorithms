#include<iostream>
#include<string>

using namespace std;

int good(string &cadena){
    int count=0;
    for(int i=0;i<cadena.size()-1;i++){
        if(cadena[i]==cadena[i+1]) ++count;
    }
    return count;
}

int main(){
    int casos;
    cin>>casos;
    while(casos--){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s;
        cin>>t;
        if(good(s)==0){
            cout<<"YES"<<endl;
            continue;
        }
        
        if(good(t)>=1){
            cout<<"NO"<<endl;
            continue;
        }
        if(t[0]!=t[t.size()-1]){
            cout<<"NO"<<endl;
            continue;
        }
        char bordesT=t[0];
        int counter0=0;
        int counter1=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                if(s[i]=='0' && s[i+1]=='0')++counter0;
                if(s[i]=='1' && s[i+1]=='1')++counter1;
            }
        }

        if(counter0>0 && counter1>0){
            cout<<"NO"<<endl;
        }else if(counter0>0 && counter1==0){
            if(bordesT=='1'){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else if(counter0==0 && counter1>0){
            if(bordesT=='0'){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}