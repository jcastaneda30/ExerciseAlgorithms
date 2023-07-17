n=int(input())
lista=[]
a=0
b=0
pasajeros=0
for i in range(n):
    entrada=input().split()
    a,b=map(int,entrada)
    if i==0:
        lista.append(b)
    else:
        lista.append(lista[i-1]+b-a)
print(max(lista))
    