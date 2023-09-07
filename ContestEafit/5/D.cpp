#include <iostream>

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    long long a, b;
    std::cin >> a >> b;

    long long g = gcd(a, b);
    long long k = a / g;

    std::cout << k << std::endl;

    return 0;
}

dotnet add package Microsoft.VisualStudio.Web.CodeGeneration.Design -v 7.0.7
dotnet add package Microsoft.EntityFrameworkCore.Design -v 7.0.7
dotnet add package Microsoft.EntityFrameworkCore.SqlServer -v 7.0.7
dotnet tool uninstall -g dotnet-aspnet-codegenerator
dotnet tool install -g dotnet-aspnet-codegenerator
dotnet tool list -g
dotnet tool update -g dotnet-ef
dotnet add package  Microsoft.EntityFrameworkCore.Tools --version  7.0.7