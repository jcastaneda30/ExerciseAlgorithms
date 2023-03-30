n=int(input())
for i in range(n):
    count=0

    entrada=[int(x) for x in input().split()]
    if entrada[0]%entrada[1]==0:
        print(0)
    else:
        residuo=entrada[0]%entrada[1]
        print(entrada[1]-residuo)