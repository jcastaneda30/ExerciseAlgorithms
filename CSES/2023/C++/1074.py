n = int(input())

lista = [int(x) for x in input().split()]
lista.sort()

costo = 0
medio = lista[n//2]
for i in range(n):
    costo+=abs(medio-lista[i])
print(costo)