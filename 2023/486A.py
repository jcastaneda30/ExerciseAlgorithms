n=int(input())
k=0
for i in range(1,n+1):
    k+=i*(-1)**i
print(k)