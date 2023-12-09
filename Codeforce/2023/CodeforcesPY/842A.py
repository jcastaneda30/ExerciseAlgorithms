l,r,x,y,k=map(int,input().split())
hpta = False
for i in range(x,y+1):
    if(l<=k*i and k*i<=r):
        hpta=True

if(hpta):
    print("YES")
else:
    print("NO")