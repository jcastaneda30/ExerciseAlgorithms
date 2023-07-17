import sys
ciclos=int(input())
for i in range(ciclos):
    entrada=input()
    numeros=[int(x) for x in (sys.stdin.readline().strip()).split()]
    numeros.sort()
    numeros=list(set(numeros))
    clip=True
    for i in range(len(numeros)-1):
        if len(numeros) > 1 and numeros[i+1]-numeros[i]>1 :
            clip=False
    if clip==True:
        print("YES")
    else:
        print("NO")