entrada=input()
lista=[]
for i in entrada:
    if i!="{" and i!="}" and  i!=","and  i!=" " and i not in lista:
        lista.append(i)
print(len(lista))