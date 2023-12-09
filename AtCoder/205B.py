N=int(input())
valores=list(map(int,input().split()))
lista = [0]*N
for i in valores:
    if i-1<N:
        lista[i-1]=1
monda= True
for j in lista:
    if j==0:
        print("No")
        monda=False
        break
if monda:
    print("Yes")
