casos=int(input())
for i in range(casos):
    entrada=[int(x) for x in input().split()]
    entrada.sort()
    print(entrada[1])