entrada1=list(input())
entrada2=list(input())
entrada1=[int(x) for x in entrada1]
entrada2=[int(x) for x in entrada2]
lista=[]
for i in range(len(entrada1)):
    if entrada1[i]+entrada2[i]==1:
        lista.append(1)
    else:
        lista.append(0)
lista=[str(x) for x in lista]
print("".join(lista))