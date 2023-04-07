n=int(input())
entrada=[int(x) for x in input().split()]
for t in entrada:
    numero=0
    for h in range(1,int(t/2)+1):
        if  t%h==0:
            numero=numero+h
    if numero==t:
        print("perfect")
    elif numero>t:
        print("abundant")
    else:
        print("deficient")
