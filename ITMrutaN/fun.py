entrada = int(input())

for i in range(entrada):
    X,Y = map(int,input().split())
    for i in range(X,Y+1):
        valor  = i%5
        if valor==3 or valor==2:
            print(i,end="-")
    print()