casos = int(input())
for i in range(casos):
    N=int(input())
    values = list(map(int,input().split()))
    base = set(values)
    if len(base)>2:
        print("NO")
    elif(len(base)==1):
        print("YES")
    else:
        wea = list(base)
        if abs(values.count(wea[0])-values.count(wea[1]))>1:
            print("NO")
        else:
            print("YES")






