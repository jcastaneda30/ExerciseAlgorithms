casos = int(input())

for i in range(casos):
    n,a,b=map(int,input().split())
    if b>=2*a:
        print(n*a)
    elif b<2*a:
        minimun = (n//2)*b
        print(minimun+(n%2)*a)