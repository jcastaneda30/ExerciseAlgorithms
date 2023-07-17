//Subset de un supuesto gran vector en el cual se generan todos los posibles.

#include <iostream>
#include <vector>
#include<algorithm>
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
int main() {
  int n = 3; // Tamaño del conjunto original
    for (int i = 1; i <= n; i++) {
    permutation.push_back(i);
    }
    do {
    sett.push_back(permutation);
    } while (next_permutation(permutation.begin(),
    permutation.end()));

    printVectorOfVectors(sett);
}
