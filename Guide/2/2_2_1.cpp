//Subset de un supuesto gran vector en el cual se generan todos los posibles.

#include <iostream>
#include <vector>
using namespace std;
vector<int> subset; // Vector para almacenar los elementos del subconjunto
vector<vector<int>> sett; // Vector para almacenar los elementos del subconjunto

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
void search(int k, int n) {
  if (k == n+1) {
    sett.push_back(subset);
  } else {
    // Incluir k en el subconjunto
    subset.push_back(k);
    search(k+1, n);
    subset.pop_back();

    // No incluir k en el subconjunto
    search(k+1, n);
  }
}

int main() {
  int n = 15; // Tamaño del conjunto original
  search(1, n); 
    printVectorOfVectors(sett);
  return 0;
}
