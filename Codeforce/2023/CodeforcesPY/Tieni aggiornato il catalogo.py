q = int(input())
ans = dict()
for i in range(q):
    c,x=input().split()
    if c == 'a':
        if x not in ans:
            ans[x]=1
        else:
            ans[x]+=1
    elif c == 't':
        if x in ans and ans[x]>=1:
            ans[x]-=1
        else:
            ans[x]=0
    elif c == 'c':
        if x not in ans:
            ans[x]=0
        print(ans[x])
    
    