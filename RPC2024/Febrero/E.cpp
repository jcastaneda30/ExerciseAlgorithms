#include <iostream>
#include <iomanip>

int main() {
    int x, y;
    std::cin >> x >> y;

    double factor = static_cast<double>(x) / (100 - x) * (100 - y) / y;

    std::cout << std::fixed << std::setprecision(10) << factor << std::endl;

    return 0;
}
