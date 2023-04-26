casos= int(input())
for i in range(casos):
    N,M=map(int,input().split())
    if N<=M*6*6:
        print("YES")
    else:
        print("NO")