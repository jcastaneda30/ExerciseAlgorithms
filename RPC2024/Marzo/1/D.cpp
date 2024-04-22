#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> palabras;

    for (int i = 0; i < n; ++i) {
        std::string palabra;
        std::cin >> palabra;
        palabras.push_back(palabra);
    }

    std::string final = "";

    for (int i = 0; i < m; ++i) {
        std::map<char, int> diccionario;
        int maximo = -1;

        for (int j = 0; j < n; ++j) {
            if (diccionario.find(palabras[j][i]) == diccionario.end()) {
                diccionario[palabras[j][i]] = 1;
            } else {
                diccionario[palabras[j][i]] += 1;
            }

            maximo = std::max(maximo, diccionario[palabras[j][i]]);
        }

        std::vector<char> letras;

        for (const auto& entry : diccionario) {
            if (entry.second == maximo) {
                letras.push_back(entry.first);
            }
        }

        std::sort(letras.begin(), letras.end());
        final += letras[0];
    }

    std::cout << final << std::endl;

    return 0;
}
