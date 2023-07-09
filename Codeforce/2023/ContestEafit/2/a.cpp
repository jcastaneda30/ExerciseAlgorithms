#include <iostream>
#include <vector>

std::string solveGame(const std::vector<int>& piles) {
    int oddPiles = 0;
    for (int stones : piles) {
        if (stones % 2 == 1) {
            oddPiles++;
        }
    }

    if (oddPiles % 2 == 1 || piles.size() == 1) {
        return "Yalalov";
    } else {
        return "Shin";
    }
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        std::cin >> N;

        std::vector<int> piles(N);
        for (int i = 0; i < N; i++) {
            std::cin >> piles[i];
        }

        std::string winner = solveGame(piles);
        std::cout << winner << std::endl;
    }

    return 0;
}
