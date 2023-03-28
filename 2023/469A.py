n=int(input())
X=input().split()
Y=input().split()
X=[int(x) for x in X]
Y=[int(x) for x in Y]
Z=X+Y
H=list(set(Z))
comprobante=True
for i in range(len(H)-1):
    if i!=len(H)-2:
        if H[i]!=H[i+1]-1:
            print("Oh, my keyboard!")
            comprobante=False
            break
    else:
        if H[-1]!=n:
            print("Oh, my keyboard!")
            comprobante=False
            break
if comprobante==True:
    print("I become the guy.")