#include <iostream>

using namespace std;

int n = 15;
int col[15] = { 0 };
int diag1[2 * 15 - 1] = { 0 };
int diag2[2 * 15 - 1] = { 0 };

int search(int y) {
  if (y == n) {
    return 1;
  }

  int count = 0;
  for (int x = 0; x < n; x++) {
    if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) {
      continue;
    }

    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
    count += search(y + 1);
    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
  }

  return count;
}

int main() {
  int result = search(0);
  cout << result << endl;

  return 0;
}