n=int(input())
grupos=[int(x) for x in input().split()]
grupos.sort(reverse=True)
lista=[]
for i in range(n):
    for j in range(i,n):
        if grupos[i]+grupos[j]<=4 and i!=j:
            grupos[i]+=grupos[j]
            grupos[j]-=grupos[j]
lista=[x for x in grupos if x!=0]
print(len(lista))