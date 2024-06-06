N,X,Y,Z = map(int, input().split())

if Y<X:
    Y,X=X,Y

if X<=Z and Z<=Y:
    print("Yes")
else:
    print("No")