#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int> mapa;
        vector<int> respuesta;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            mapa[nums[i]]++;
        for (auto x : mapa) {
            respuesta.insert(respuesta.end(), x.second, x.first);
        }
        return respuesta;
    }
};

int main() {
    vector<int> aa = {1, 3, 5, 7, 8, 6, 5, 7, 1, 1, 1, 3, 2, 3, 4, 5, 0, 0, 3, 5};
    Solution waos;
    vector<int> ab = waos.sortArray(aa);

    cout << "El vector es: ";
    for (size_t i = 0; i < ab.size(); i++) {
        cout << ab[i] << " ";
    }
    cout << endl;
    return 0;
}
