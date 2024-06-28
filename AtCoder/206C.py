N=int(input())
lista=list(map(int,input().split()))
lista.sort()
contador=0
ultimo = lista[0]
repeticion=0
for i in range(1,N):
    contador+=N-i
    if(lista[i]==ultimo):
        contador-=1+repeticion
        repeticion+=1
    else:
        repeticion=0
    ultimo=lista[i]
print(contador)