n=int(input())
X=input().split()
Y=input().split()
X=[int(x) for x in X]
Y=[int(x) for x in Y]
turno="X"
posible=True
for i in range(1,n+1):
    if turno=="X":
        if i not in X:
            print("Oh, my keyboard!")
            posible=False
            break
        turno="Y"
        continue
    if turno=="Y":
        if i not in Y:
            print("Oh, my keyboard!")
            posible=False
            break
        turno="X"

if posible==True:
    print("I become the guy.")
