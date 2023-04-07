cantida=int(input())
cadena=[int(x) for x in input().split()]
pares=0
posicionpar=0
impares=0
posicionimpar=0
for i in range(len(cadena)):
    if cadena[i]%2==0:
        pares+=1
        posicionpar=i+1
    else:
        impares+=1
        posicionimpar=i+1
if impares>pares:
    print(posicionpar)
else:
    print(posicionimpar)
