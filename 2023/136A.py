n=int(input())
entrada=input().split()
numeros=[int(x)-1 for x in entrada]
hola=[int(x)-1 for x in entrada]
for i in range(n):
    hola[numeros[i]]=i+1
hola=[str(x) for x in hola]
print(" ".join(hola))