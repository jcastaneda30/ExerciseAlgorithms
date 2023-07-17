entrada=input().split()
k,n,w=map(int,entrada)
banana=0
for i in range(1,w+1):
    banana+=i*k
if n-banana<0:
    print(abs(n-banana))
else:
    print(0)
