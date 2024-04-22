#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;


vector<long long> get_subset_sums(int l, int r, vector<int>& a) {
    int len = r - l + 1;
    vector<long long> res;

    for (int i = 0; i < (1 << len); i++) {
        long long sum = 0;
        for (int j = 0; j < len; j++) {
            if (i & (1 << j)) { 
                sum += a[l + j]; 
            }
        }
        res.push_back(sum);
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> valores(n);
    for (int &t : valores)
        cin >> t;
    vector<long long> left =     get_subset_sums(0,n/2-1,valores);
    vector<long long> right  =     get_subset_sums(n/2,n-1,valores);

    sort(left.begin(), left.end());
	sort(right.begin(), right.end());
    long long counter = 0;

    for (long long i : left) {
		auto low = lower_bound(right.begin(), right.end(), x - i);
		auto high = upper_bound(right.begin(), right.end(), x - i);
		int start_index = low - right.begin();
		int end_index = high - right.begin();
		counter += end_index - start_index;
	}
    cout << counter << endl;
    return 0;
}