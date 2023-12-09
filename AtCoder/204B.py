N=int(input())
valores = list(map(int,input().split()))
suma=0
for i in range(N):
    if valores[i]>10:
        suma+=valores[i]-10
print(suma)