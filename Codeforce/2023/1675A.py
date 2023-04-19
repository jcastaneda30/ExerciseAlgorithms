casos = int(input())
for i in range(casos):
    a,b,c,x,y = map(int,input().split())
    x=x-a
    y=y-b
    cosa = True
    if x>0:
        num=c
        c=c-x
        x=x-num
    if y>0:
        num=c
        c=c-y
        y=y-num
    
    if x>0 or y>0:
        print("NO")
    else: 
        print("YES")
        
        