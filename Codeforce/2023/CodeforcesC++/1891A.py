casos = int(input())

for i in range(casos):
    cantidad = int(input())
    valores = list(map(int, input().split()))
    valles=0
    minimo=9999999
    for j in range(1,cantidad-1):
        if valores[j-1]>valores[j] and valores[j+1]>valores[j]:
            valles+=1
    if valles>2:
        print("NO")
    else:
        print("YES")