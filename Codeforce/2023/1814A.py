def MCD(a,k):
    while(k!=0):
        t=k
        k=a%k
        a=t
    return a

entrada=int(input())
for i in range(entrada):
    numeros=[int(x) for x in input().split()]
    if numeros[0]%MCD(2,numeros[1])==0:
        print("YES")
    else:
        print("NO")