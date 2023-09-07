#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int maxx = *max_element(nums.begin(), nums.end());
        vector<int> sub(maxx + 1, 0);
        vector<int> subOrdenado;
        for (int i : nums) sub[i]++;
        for (int j = 0; j <= maxx; j++) {
            if (sub[j] != 0) {
                subOrdenado.insert(subOrdenado.end(), sub[j], j);
            }
        }
        return subOrdenado;
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
