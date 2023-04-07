entrada=input()
n,k=map(int,entrada.split())
entrada2=input().split()
entrada2en=[int(x) for x in entrada2]
contador=0
for i in range(n):
    if entrada2en[i]>=entrada2en[k-1] and entrada2en[i]>0:
        contador+=1
print(contador)
