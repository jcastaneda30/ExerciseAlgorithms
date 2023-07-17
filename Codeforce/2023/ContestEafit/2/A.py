cantidad,posicion=map(int,input().split())
lista=[]
for i in range(cantidad):
    elemento=list(int(x) for x in input().split())
    elemento[0]=-elemento[0]
    lista.append(elemento)
lista.sort()
contador =0
for i in range(len(lista)):
    if lista[i]==lista[posicion-1]:
        contador+=1
print(contador)