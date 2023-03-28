n=int(input())
cartas=input().split()
cartas=[int(x) for x in cartas]
l=0
r=n-1
sereja=0
dima=0
turnos="sereja"
while l<=r:
    if turnos=="sereja":
        if cartas[l]>=cartas[r]:
            sereja+=cartas[l]
            l+=1
        elif cartas[l]<=cartas[r]:
            sereja+=cartas[r]
            r-=1
        turnos="dima"
    elif turnos=="dima":
        if cartas[l]>=cartas[r]:
            dima+=cartas[l]
            l+=1
        elif cartas[l]<=cartas[r]:
            dima+=cartas[r]
            r-=1
        turnos="sereja"
print(sereja, dima)