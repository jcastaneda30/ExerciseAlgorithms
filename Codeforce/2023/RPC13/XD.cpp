#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int lenDic, queries;
    std::cin >> lenDic >> queries;

    std::vector<std::string> dict;

    for (int i = 0; i < lenDic; ++i) {
        std::string palabra;
        std::cin >> palabra;
        dict.push_back(palabra);
    }

    std::sort(dict.begin(), dict.end());
    int counter = 0;

    for (int j = 0; j < queries; ++j) {
        std::string primera, segunda;
        std::cin >> primera >> segunda;

        auto primerIndice = std::lower_bound(dict.begin(), dict.end(), primera) - dict.begin();
        auto segundoIndice = std::upper_bound(dict.begin(), dict.end(), segunda) - dict.begin();
        int resultado = segundoIndice - primerIndice;
        std::cout << resultado << std::endl;
    }

    return 0;
}
