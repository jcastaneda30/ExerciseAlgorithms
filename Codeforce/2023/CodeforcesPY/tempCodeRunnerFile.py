n,m=map(int,input().split())
valio=False
if(n>=m):
    print(n-m)
else:
    for i in range(n+1):
        if i==n:
           valio=True
           break 
        if m%(n-i)==0:
            number=n-i
            counter=0
            while(number*2**counter!=m and number*2**counter<m):
                counter+=1
            
            if(number*2**counter==m):
                print(i+counter)
                break
    if valio:
        counter1=0
        if(n%2==0):
            while(n<m):
                n*=2
                counter1+=1
            print(counter1+n-m)
        else:
            counter1+=1
            n-=1
            while(n<m):
                n*=2
                counter1+=1
            print(counter1+n-m)
            