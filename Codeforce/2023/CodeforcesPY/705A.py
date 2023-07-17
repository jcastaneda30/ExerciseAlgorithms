n=int(input())
for i in range(1,n+1):
    if i==n and n%2==1:
        print("I hate it",end=" ")
        break
    elif i==n:
        print("I love it",end=" ")
        break
    if i%2==1:
        print("I hate that",end=" ")
    else:
        print("I love that",end=" ")