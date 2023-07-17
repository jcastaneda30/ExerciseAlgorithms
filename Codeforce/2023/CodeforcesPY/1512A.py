casos=int(input())
for i in range(casos):
    cantida=input()
    elementos=[int(x) for x in input().split()]
    numeros=list(set(elementos))
    numeroA=elementos.count(numeros[0])
    numeroB=elementos.count(numeros[1])
    if numeroA>numeroB:
        print(elementos.index(numeros[1])+1)
    else:
        print(elementos.index(numeros[0])+1)

