import sys
import math

def busquedaBinaria(lista,elemento):
    l=0
    r=len(lista)-1
    indicemascercano=0

    while l<r:
        mid = math.ceil((r + l)/2)
        valorMedio = lista[mid]
        if valorMedio<=elemento:
            l=mid+1
        else:
            r=mid
        
            

    return l

cantidadTiendas=int(input())
tiendas=[int(x) for x in (sys.stdin.readline().strip()).split()]
tiendas.sort()
q=int(input())
for i in range(q):
    dinero=int(input())
    if dinero<tiendas[0]:
        print(0)
    elif dinero>tiendas[-1]:
        print(len(tiendas))
    else:
        print(busquedaBinaria(tiendas,dinero)+1)
