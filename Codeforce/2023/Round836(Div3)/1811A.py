n=int(input())
for i in range(n):
    entrada=input().split()
    numero=list(input())
    numero2=list(entrada[1])+numero
    numero=numero+list(entrada[1])
    lista=[]
    for i in range(1,int(entrada[0])+1):
        copia="".join(numero)
        lista.append(copia)
        numero[-i], numero[-i-1] = numero[-i-1], numero[-i]
    lista.append("".join(numero2))
    print(max(lista,key=int))