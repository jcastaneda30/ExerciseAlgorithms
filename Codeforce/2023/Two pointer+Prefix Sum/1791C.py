n=int(input())
for i in range(n):
    n=int(input())
    entrada=list(input())
    l=0
    r=n-1
    string=n
    cosa=True
    while l<=r:
        if entrada[l]!=entrada[r] and l!=r:
            l+=1
            r-=1
            string-=2
        else:
            cosa=False
            print(string)
            break
    if cosa==True:
        print(string)