n=int(input())
entrada=[int(x) for x in input().split()]
lista=None
count=1
for i in range(n-1):
    if entrada[i]<=entrada[i+1]:
        count+=1
    else:
        if lista==None:
            lista=[]
        lista.append(count)
        count=1
    if i==n-2:
        if lista!=None:
            if count not in lista:
                lista.append(count)
if count==1 and n==0:
    count=0
if lista==None:
    print(count)
else:
    print(max(lista))