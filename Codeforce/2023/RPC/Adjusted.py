n,k,xprom = map(int,input().split())
datos = [int(x) for x in input().split()]
difAlProm = [abs(x-xprom) for x in datos]
print(difAlProm)
turno=True
error=1000000000000
for i in range(k):
    maximoIndex = difAlProm.index(max(difAlProm))
    datos.pop(maximoIndex)
    difAlProm.pop(maximoIndex)
    print(datos,difAlProm)
    if abs(xprom - sum(datos)/(n-(i+1)))<error:
        error=abs(xprom - sum(datos)/(n-(i+1)))
print(error)

