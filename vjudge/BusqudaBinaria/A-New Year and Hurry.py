def Llegar(n, k, problemas):
    tiempo_restante = 240 - k
    ProblemasResueltos = 0
    for i in range(1, n+1):
        tiempo_restante = tiempo_restante - 5*i
        if tiempo_restante < 0:
            return False
        ProblemasResueltos = ProblemasResueltos + 1
        if ProblemasResueltos == problemas:
            return True
    return False

Problemas, TiempoEnLlegar = map(int, input().split())

left = 0
right = Problemas
while left < right:
    mid = (left + right + 1) // 2
    if Llegar(Problemas, TiempoEnLlegar, mid):
        left = mid
    else:
        right = mid - 1

print(left)