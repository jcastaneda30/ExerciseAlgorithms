entrada=input().split()
n,k=map(int,entrada)
alturas=input().split()
alturas=[int(x) for x in alturas]
ancho=0
for i in alturas:
    if i>k:
        ancho+=2
    else:
        ancho+=1
print(ancho)