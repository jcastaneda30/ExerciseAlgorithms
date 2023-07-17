#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int bs_lower_bound(vector<int> array, int n, int x) {
    int l = 0;
    int h = n; // Not n - 1
    while (l < h) {
        int mid =  l + (h - l) / 2;
        if (x <= array[mid]) {
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}
// CPP program to illustrate
// std :: lower_bound

// Driver code
int main()
{
	// Input vector
	vector<int> v{ 10, 20, 30, 30, 30, 40, 50 };

	// Print vector
	cout << "Vector contains :";
	for (unsigned int i = 0; i < v.size(); i++)
		cout << " " << v[i];
	cout << "\n";

	vector<int>::iterator low1, low2, low3;
	
	// std :: lower_bound
	low1 = lower_bound(v.begin(), v.end(), 30);
	low2 = lower_bound(v.begin(), v.end(), 35);
	low3 = lower_bound(v.begin(), v.end(), 55);

	// Printing the lower bounds
	cout
		<< "\nlower_bound for element 30 at position : "
		<< (low1 - v.begin());
	cout
		<< "\nlower_bound for element 35 at position : "
		<< (low2 - v.begin());
	cout
		<< "\nlower_bound for element 55 at position : "
		<< (low3 - v.begin());

	return 0;
}

