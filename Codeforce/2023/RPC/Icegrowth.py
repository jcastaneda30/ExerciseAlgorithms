n,k=map(int,input().split())
temperatura=[-int(x) for x in input().split()]
centimetrosPersonaS=[int(x) for x in input().split()]
centimetrosPersona=[]

for p in centimetrosPersonaS:
    centimetrosPersona.append([p,0])
centrimetrosDisponibles=[]
acumulador=0

for j in temperatura:
    acumulador=(acumulador+j)
    if acumulador<0:
        acumulador=0
    centrimetrosDisponibles.append(acumulador/5)

for i in range(k):
    pivote=centimetrosPersona[i][0] #Centimetros de la persona y xd
    for k in centrimetrosDisponibles:
        if k >= pivote:
            centimetrosPersona[i][1] = centimetrosPersona[i][1] + 1

for i in centimetrosPersona:
    print(i[1],end=" ")
