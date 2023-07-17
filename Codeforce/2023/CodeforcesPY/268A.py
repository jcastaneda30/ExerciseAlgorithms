n=int(input())
lista=[]
for i in range(n):
    uniformes=input().split()
    lista.append(uniformes)
count=0
for i in range(len(lista)):
       for j in range(len(lista)):
             if lista[i][0]==lista[j][1]:
                   count+=1
print(count) 