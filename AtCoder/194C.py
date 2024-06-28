N = int(input())
Ai = list(map(int, input().split()))

acumulador = 0
acumulador2 = 0
Ai_acumulate = [0] * N
Ai_2 = [0] * N

for i in range(N):
    acumulador += Ai[i]
    acumulador2 += Ai[i] * Ai[i]
    Ai_acumulate[i] = acumulador
    Ai_2[i] = acumulador2

ans = 0
for i in range(1, N):
    ans += i * Ai[i] * Ai[i] - 2 * Ai[i] * Ai_acumulate[i - 1] + Ai_2[i - 1]

print(ans)
