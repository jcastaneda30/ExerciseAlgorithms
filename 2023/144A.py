n=int(input())
alturas=[int(x) for x in input().split()]
h=max(alturas)
hn=min(alturas)
pasos=0
pasos2=0
for i in range(1,n+1):    
    if alturas[-i]!=hn:
        pasos+=1
    else:
        break
index=n-pasos-1
numero=alturas.pop(index)
alturas.append(numero)
for i in range(n):
    if alturas[i]!=h:
        pasos2+=1
    else:
        break
print(pasos2+pasos)