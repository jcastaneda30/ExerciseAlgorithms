n=[int(i) for i in input().split()]
interruptor=True
for i in range(1,n[0]+1):
    for j in range(1,n[1]+1):
        if i%2!=0:
            if j!=n[1]:
                print("#",end="")
            else:
                print("#")
        if i%2==0 and j!=n[1] and interruptor==True:
            print(".",end="")
        elif i%2==0 and j==n[1] and interruptor==True:
            print("#")
        elif i%2==0 and j==1 and interruptor==False:
            print("#",end="")
        elif i%2==0 and j!=1 and interruptor==False:
            if j!=n[1]:
                print(".",end="")
            else:
                print(".")
    if i%2==0 and interruptor==True:
        interruptor=False
    elif i%2==0 and interruptor==False:
        interruptor=True