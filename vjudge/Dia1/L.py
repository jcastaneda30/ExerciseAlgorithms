n = int(input())

lista = [int(x) for x in input().split()]

maximo = max(lista)

numero = 0

for i in lista:
    numero+=maximo-i

print(numero)