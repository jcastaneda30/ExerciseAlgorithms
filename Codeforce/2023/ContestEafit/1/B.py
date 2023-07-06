import math 
t = int(input())
for i in range(t):
    n = int(input())
    b=[int(x) for x in input().split()]
    jaulasSobrantes = 0
    haulas = 0
    jaulasTotales = 0
    cerdos = 0 
    for h in range(n):
        if  b[h]==1:
            cerdos+=1
            if(jaulasSobrantes): #jaulas=0 -> falso, si hay jaulas que sobran se ocupan, si no, se crea una nueva
                jaulasSobrantes-=1
            else:
                jaulasTotales+=1
        else:
            if cerdos==0:
                requerido=0
            else:
                requerido=math.floor(cerdos/2)+1
            jaulasSobrantes=jaulasTotales-requerido
    print(jaulasTotales)    