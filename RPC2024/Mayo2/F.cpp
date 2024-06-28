#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric> // para std::gcd

using namespace std;

// Función para realizar el backtracking
pair<int, vector<int>> backtracking(const vector<int>& heights, vector<int> selected, int acum) {
    if (heights.empty()) {
        return {acum, selected};
    }
    
    int new_acum = acum;
    vector<int> selection = selected;
    
    for (int i = 0; i < heights.size(); i++) {
        vector<int> new_heights;
        if(i==heights.size()-1) new_heights.insert(new_heights.end(), heights.begin(), heights.begin() + i);
        else{
            new_heights.insert(new_heights.end(), heights.begin(), heights.begin() + i);
            new_heights.insert(new_heights.end(), heights.begin() + i + 1, heights.end()); 
        }
        
        int possible_new_acum;
        vector<int> possible_selection;
        
        if (selected.empty()) {
            tie(possible_new_acum, possible_selection) = backtracking(new_heights, {heights[i]}, acum);
        } else {
            vector<int> new_selected = selected;
            new_selected.push_back(heights[i]);
            tie(possible_new_acum, possible_selection) = backtracking(new_heights, new_selected, acum + gcd(selected.back(), heights[i]));
        }
        
        if (possible_new_acum > new_acum) {
            new_acum = possible_new_acum;
            selection = possible_selection;
        }
    }
    
    return {new_acum, selection};
}

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    
    // Obtener alturas únicas y cuántas veces aparece cada una
    map<int, int> count;
    for (int i = 1; i <= 20; ++i) {
        count[i] = 0;
    }
    for (int h : heights) {
        count[h] += 1;
    }
    
    vector<int> unique_heights;
    for (const auto& [key, value] : count) {
        if (value > 0) {
            unique_heights.push_back(key);
        }
    }
    
    int acum;
    vector<int> selection;
    
    if (unique_heights.size() > 1) {
        tie(acum, selection) = backtracking(unique_heights, vector<int>(), 0);
    } else {
        acum = 0;
        selection = {unique_heights[0]};
    }
    
    // Añadir números repetidos al acum
    for (int i : selection) {
        if (count[i] > 1) {
            acum += i * (count[i] - 1);
        }
    }
    
    cout << acum << endl;
    
    return 0;
}
