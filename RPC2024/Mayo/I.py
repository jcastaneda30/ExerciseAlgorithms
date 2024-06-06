MOD = 10**9 + 7

def count_arrangements(a, b, c):
    dp = [[[0] * 3 for _ in range(3)] for _ in range(a + b + c + 1)]
    dp[0][0][0] = 1
    
    for i in range(1, a + b + c + 1):
        for j in range(3):
            for k in range(3):
                for x in range(3):
                    for y in range(3):
                        if x != j and y != k and (i == 1 or (x != 0 and y != 0)):
                            dp[i][j][k] += dp[i-1][x][y]
                            dp[i][j][k] %= MOD
    
    total = sum(sum(dp[a + b + c][j][k] for k in range(3)) for j in range(3))
    return total % MOD

# Lectura de la entrada
a, b, c = map(int, input().split())

# Calcular y mostrar el resultado
print(count_arrangements(a, b, c))
