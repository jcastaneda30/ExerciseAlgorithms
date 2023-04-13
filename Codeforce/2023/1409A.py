casos=int(input())
for i in range(casos):
    a,b=map(int,input().split())
    f=min(a,b)
    d=max(a,b)
    c=d-f
    if c==0:
        print(0)
        continue
    else:
        if c%10==0:
            print(c//10)
        else:
            print((c//10)+1)