#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
#include <iomanip> 
using namespace std;
void backtracking(vector<string> &ans,string word,int index){
    if(index==word.size()){
        ans.push_back(word);
        return;
    }
    if(word[index]=='?'){
        string caracteres = "-+";
        for(int i=0;i<2;i++){
            word[index]=caracteres[i];
            backtracking(ans,word,index+1);
        }
    }else{
        backtracking(ans,word,index+1);
    }
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    vector<string> ans;
    backtracking(ans,s2,0);
    int finalPos = 0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+') finalPos++;
        else finalPos--;
    }
    long double cantida = 0;
    for(int i=0;i<ans.size();i++){
        int counter = 0;
        for(int j=0;j<ans[i].size();j++){
            if(ans[i][j]=='+') counter++;
            else counter--;
        }
        if(counter==finalPos) cantida++;
    }
    long double percentaje = cantida/(long double)ans.size();
    cout<<fixed<<std::setprecision(9)<<percentaje<<endl;
    return 0;
}