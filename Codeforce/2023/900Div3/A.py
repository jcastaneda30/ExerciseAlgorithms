t = int(input())
for _ in range(t):
    ta,k=map(int,input().split())
    lista = list(map(int,input().split()))
    if(k in lista):
        print("YES")
    else:
        print("NO")