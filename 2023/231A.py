n=int(input())
contadorexterno=0
for i in range(n):
    contador=0
    entrada=input().split()
    for h in entrada:
        if h == "1":
            contador+=1
    if contador>=2:
        contadorexterno+=1
print(contadorexterno)