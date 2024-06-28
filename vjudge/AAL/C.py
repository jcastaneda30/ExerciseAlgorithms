N = int(input())

valores = dict()

casos = list(map(int, input().split()))

for i in range(len(casos)):
    if casos[i] in valores:
        valores[casos[i]].append(i)
    else:
        valores[casos[i]]=[i]
        
suma = 0
respuesta = [0]*N
alReves = sorted(valores.items())
alReves.reverse()

for i,j in alReves:
    for k in j:
        respuesta[k]=suma
    suma+=i*len(j)

print(*respuesta)