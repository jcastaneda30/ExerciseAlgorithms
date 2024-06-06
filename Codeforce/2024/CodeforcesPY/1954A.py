t = int(input())
for i in range(t):
    n,m,k=map(int,input().split())

    if(k>=(n//m)):
        print("NO")
    else:
        print("YES")