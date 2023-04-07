lista=[]
for i in range(5):
    n=input().split()
    t=[int(x) for x in n]
    lista.append(t)

for h in range(5):
    for t in range(5):
        if lista[h][t]==1:
            distancia=abs(h-2)+abs(t-2)
            print(distancia)
            break