n=int(input())
entrada=input().split()
entrada=[int(x) for x in entrada]

entrada.sort(reverse=True)

cantidadm=0
dinero=0

total=sum(entrada)
for i in entrada:
    cantidadm+=1
    dinero+=i
    if dinero>total-dinero:
        break
print(cantidadm)