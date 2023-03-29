n=int(input())
X=input().split()
Y=input().split()
X=[int(x) for x in X]
Y=[int(x) for x in Y]
W=X[1::]
K=Y[1::]
Z=W+K
Z.sort()
comprobante=1
for i in range(len(Z)-1):
        if Z[i]!=Z[i+1]:
            comprobante+=1
if X[0]==0 and Y[0]==0:
     comprobante=0
if comprobante==n:
    print("I become the guy.")
else:
     print("Oh, my keyboard!")