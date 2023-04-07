n=int(input())
lista=[]
for i in range(n):
    entrada=input()
    lista.append(entrada)
count=0
for i in range(len(lista)-1):
    if lista[i]!=lista[i+1]:
        count+=1
print(count+1)
