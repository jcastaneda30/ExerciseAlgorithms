#include <iostream>
#include <vector>
using namespace std;

vector<int> permutation;
vector<vector<int>> sett;

bool chosen[3+1];

void search() {
    if (permutation.size() == 3) {
        sett.push_back(permutation);
    } else {
    for (int i = 1; i <= 3; i++) {
        if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(){
    int values;
    vector<int> primos = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while(cin>>values){
        vector<vector<int>> todos;
        vector<int> listas={1};
        recursion(todos,primos,listas,1,values);
        for(int i=0;i<values;i++){
            for(int j=0;j<values;j++){
                cout<<todos[i][j] << " ";
            }
            cout<<endl;
        }
    }   
    return 0;
}