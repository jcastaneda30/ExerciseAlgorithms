    #include<iostream>
    #include<vector>
    #include<map>
    #include<set>
    #include<unordered_map>
    #include <algorithm>

    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        int N,Max=-1;
        cin>>N;
        vector<int> posiciones(N+1,0);
        set<int> saltos;
        for(int i=1;i<N+1;i++){
            int xi; cin>>xi;
            saltos.insert(xi);
            posiciones[i]=xi;
            Max=max(xi,Max);
        }
        
        set<int> vacios;
        Max=Max+2;
        for(int i=1;i<Max;i++){
            if(saltos.find(i)==saltos.end()){
                vacios.insert(i);
            }
        }

        int Q;
        cin>>Q;
        for(int i=0;i<Q;i++){
            int rana; cin>>rana;
            auto it = *vacios.upper_bound(posiciones[rana]);
            auto end = *vacios.rbegin();
            if(it==end){
                vacios.insert(it+1);
            }
            vacios.insert(posiciones[rana]);
            posiciones[rana]=it;
            vacios.erase(it);
            cout<<it<<"\n";
        }
        return 0;
    }