n=int(input())
for i in range(n):
    diccionario={}
    cantidad=int(input())
    entrada=list(input())
    for i in entrada:
        if i not in diccionario:
            diccionario[i]=2
        else:
            diccionario[i]+=1
    balones=sum(diccionario.values())
    print(balones)