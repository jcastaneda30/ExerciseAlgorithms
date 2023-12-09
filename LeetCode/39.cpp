#include<iostream>
#include<vector>

using namespace std;
void increible(int index, int objetivo, vector<int> &valores, vector<int> &array, vector<vector<int>> &ans, int suma) {
    
    if (suma == objetivo) {
        ans.push_back(array);
        return;
    }
    if (suma > objetivo) return;

    if (index == valores.size()) return;

    array.push_back(valores[index]);
    increible(index, objetivo, valores, array, ans, suma + valores[index]);
    array.pop_back();
    increible(index + 1, objetivo, valores, array, ans, suma);
    
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> array;
    increible(0, target, candidates, array, ans, 0);
    return ans;
}
