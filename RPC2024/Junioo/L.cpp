#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int v, vector<bool> &visited, const vector<int> &owner, int &cycle_length) {
    visited[v] = true;
    int next = owner[v];
    if (!visited[next]) {
        cycle_length++;
        dfs(next, visited, owner, cycle_length);
    }
}

int minimum_swaps(const vector<int> &owner) {
    int n = owner.size();
    vector<bool> visited(n, false);
    int total_swaps = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int cycle_length = 1;
            dfs(i, visited, owner, cycle_length);
            total_swaps += cycle_length - 1;
        }
    }

    return total_swaps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> right_shoe(N), left_shoe(N);
    for (int i = 0; i < N; ++i) {
        cin >> right_shoe[i];
        right_shoe[i]--;
    }

    for (int i = 0; i < N; ++i) {
        cin >> left_shoe[i];
        left_shoe[i]--;
    }

    int swaps_right = minimum_swaps(right_shoe);
    int swaps_left = minimum_swaps(left_shoe);

    cout << swaps_right + swaps_left << endl;

    return 0;
}
