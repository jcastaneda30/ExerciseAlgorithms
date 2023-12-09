n=int(input())
puntajes = [int(x) for x in input().split()]
puntajes.sort()
for i in range(n):
    puntajes[i]=0
    puntajes[len(puntajes)-1-i]=0
print(float(sum(puntajes))/float(len(puntajes)-n*2))