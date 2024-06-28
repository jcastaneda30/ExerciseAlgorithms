entrada = int(input())

for i in range(entrada):
    x,y,k=map(int,input().split())
    if x>=y:
        print(x)
    elif(x<y):
        if(y-x<=k):
            print(y)
        elif(y-x>k):
            diff=y-x-k
            print(x+k+2*diff)
