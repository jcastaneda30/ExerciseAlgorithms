t=int(input())
for i in range(t):
    ruedas=int(input())
    posicionInicial=[int(x) for x in input().split()]
    for j in range(ruedas):
        cambio=input().split()
        for k in cambio[1]:
            if k=="D":
                if posicionInicial[j]+1>9:
                    posicionInicial[j]=0
                else:
                    posicionInicial[j]=posicionInicial[j]+1
            elif k=="U":
                if posicionInicial[j]-1<0:
                    posicionInicial[j]=9
                else:
                    posicionInicial[j]=posicionInicial[j]-1
    posicionInicial=[str(x) for x in posicionInicial]
    print(" ".join(posicionInicial))