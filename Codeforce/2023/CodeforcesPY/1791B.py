n=int(input())
for i in range(n):
    xd = input()
    x=0
    y=0
    cosa = False
    string=input()
    for i in string:
        if i == "U":
            y=y+1
        elif i == "D":
            y=y-1
        elif i == "R":
            x=x+1
        elif i == "L":
            x=x-1
        if x==1 and y==1:
            cosa=True
    if cosa==True:
        print("YES")
    else:
        print("NO")
        