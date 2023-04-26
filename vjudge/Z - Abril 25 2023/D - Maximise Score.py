casos= int(input())
for i in range(casos):
    xd = int(input())
    carga=[int(x) for x in input().split()]
    carga.sort()
    print(abs(carga[(len(carga)//2)-1]-carga[(len(carga)//2)]))
