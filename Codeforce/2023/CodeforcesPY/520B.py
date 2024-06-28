n,m=map(int,input().split())
valio=False
if(n>=m):
    print(n-m)
else:
    temporal=0
    while(m>n):
        if(m%2==0): m/=2
        else: m+=1
        temporal+=1
    print(temporal+int(n-m))
            