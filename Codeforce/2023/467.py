n=int(input())
count=0
for i in range(n):
    entrada=input().split()
    p,q=map(int,entrada)
    if q-p>=2:
        count+=1
print(count)