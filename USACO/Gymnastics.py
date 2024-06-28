import sys

sys.stdin = open("gymnastics.in", "r")
sys.stdout = open("gymnastics.out", "w")

k,n = map(int,input().split())

datos = []

for i in range(k):
    lista = list(map(int,input().split()))
    datos.append(lista)
    
diccionario = dict()

for i in range(k):
    for j in range(1,n+1):
        posicion = datos[i].index(j)
        if j not in diccionario:
            diccionario[j]=set(datos[i][posicion:])
        else:
            valor= set(datos[i][posicion:])
            diccionario[j]=diccionario[j]&valor
counter=0
for i in diccionario.keys():
    counter+=len(diccionario[i])-1
print(counter)