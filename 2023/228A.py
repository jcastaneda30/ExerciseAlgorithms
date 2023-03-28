entrada=input().split()
lista=[]
for i in entrada:
    if i not in lista:
        lista.append(i)
print(len(entrada)-len(lista))