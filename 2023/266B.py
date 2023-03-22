entrada=input().split()
n,t=map(int,entrada)
niños=list(input())
cosa=True
for i in range(t):
    for k in range(n-1):
        if cosa==False:
            cosa=True
            continue
        if niños[k]=="B" and niños[k+1]=="G":
            niños[k],niños[k+1]=niños[k+1],niños[k]
            cosa=False
    cosa=True
print("".join(niños))