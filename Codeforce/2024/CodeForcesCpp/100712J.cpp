#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,int> students;
        map<int,int> candies;
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            students[value]++;
        }
        for(int i=0;i<m;i++){
            int value;
            cin>>value;
            candies[value]++;
        }
        if(candies.size()<students.size()) {
            cout<<"NO"<<'\n';
            continue;
        }
        int counter = 0;
        auto candieBag = candies.begin(); 
        for(auto student=students.begin();student!=students.end();student++){
            while(student->second > candieBag->second && candieBag!=candies.end()){
                candieBag++;
            }
            if(candieBag!=candies.end() && student->second <= candieBag->second ) {
                counter++;
                candieBag++;    
            }
        }
        if(counter==students.size()) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}