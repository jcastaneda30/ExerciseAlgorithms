import math 


n,x=map(int,input().split())

lista_b=[int(x)  for x in input().split()]
lista_a=[int(x)**2  for x in lista_b]


media = sum(lista_a) / n

formula = sum(lista_a)/n
valor=math.sqrt((x*n)/sum(lista_a))
if valor==1 or valor==0:
    lista_b=[x for x in lista_b]
    for i in range(len(lista_b)):
        if i!=len(lista_b)-1:
            print(lista_b[i],end=" ")
        else:
            print(lista_b[i])
else:
    lista_b=[math.sqrt(x)*valor for x in lista_a]
    for i in range(len(lista_b)):
        if i!=len(lista_b)-1:
            print(lista_b[i],end=" ")
        else:
            print(lista_b[i])

