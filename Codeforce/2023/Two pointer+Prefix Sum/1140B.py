n=int(input())
for i in range(n):
    cantidad=int(input())
    xd=cantidad
    entrada=list(input())
    signoM=">"
    signoL="<"
    if signoM in entrada and signoL not in entrada:
        print("0")
        continue
    if signoL in entrada and signoM not in entrada:
        print("0")
        continue
    L=0
    R=cantidad-1
    posicionesI=0
    posicionesD=0
    while(entrada[L]=="<"):
        L+=1
        posicionesI+=1
    while(entrada[R]==">"):
        R-=1
        posicionesD+=1
    eliminados=0
    if posicionesI>posicionesD:
        eliminados=posicionesD
    else:
        eliminados=posicionesI
    print(eliminados)

        