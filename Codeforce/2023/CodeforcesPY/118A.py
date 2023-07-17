entrada=list(input().lower())
vocales = "aeiouy"
lista2=[]
for i in range(len(entrada)):
    if entrada[i] in vocales:
        pass
    else:
        lista2.append(entrada[i])
for k in lista2:
    print(f".{k}",end="")