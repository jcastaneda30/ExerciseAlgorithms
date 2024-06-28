t = int(input())

for i in range(t):
    a,b,c,d = map(int,input().split())
    rango1 = []
    rango2 = []
    counter = a+1
    while(counter!=b):
        rango1.append(counter)
        counter=(counter+1)%13
        if(counter==0):
            counter=1
    counter = b+1
    while(counter!=a):
        rango2.append(counter)
        counter=(counter+1)%13
        if(counter==0):
            counter=1

    if((c in rango1 and d in rango2) or (d in rango1 and c in rango2)):
        print("YES")
    else:
        print("NO")
    