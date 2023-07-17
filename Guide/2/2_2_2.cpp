//Subset de un supuesto gran vector en el cual se generan todos los posibles.

#include <iostream>
#include <vector>
using namespace std;
vector<int> permutation;
vector<vector<int>> sett; // Vector para almacenar los elementos del subconjunto
bool chosen[3+1];
void printVectorOfVectors(const vector<vector<int>>& vec) {
  for (const auto& innerVec : vec) {
    cout << "[";
    for (int i = 0; i < innerVec.size(); i++) {
      cout << innerVec[i];
      if (i != innerVec.size() - 1) {
        cout << ", ";
      }
    }
    cout << "]" << endl;
  }
}
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

int main() {
  int n = 15; // Tamaño del conjunto original
  search(); 
  printVectorOfVectors(sett);
  return 0;
}
