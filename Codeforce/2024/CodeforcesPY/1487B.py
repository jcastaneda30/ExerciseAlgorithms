t = int(input())

for i in range(t):
    n,k= map(int,input().split())
    k-=1
    encuentro = n//2
    print((k+(n%2)*(k//encuentro))%n+1)