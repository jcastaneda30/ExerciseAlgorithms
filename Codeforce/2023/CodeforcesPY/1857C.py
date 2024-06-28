t = int(input())

for i in range(t):
    n = int(input())
    values = [int(x) for x in input().split()]
    values.sort()
    maixmo = -1e10
    n-=1
    copy = n
    valuesList = [] 
    for j in range(len(values)+1):
        if not copy:
            valuesList.append(maixmo)
            n-=1
            copy=n
            if j<len(values):
                maixmo=-1e10
            
        if j<len(values):
            maixmo=max(maixmo,values[j])
            copy-=1
    valuesList.append(maixmo)
    for i in range(len(valuesList)):
        print(valuesList[i],end=' ')
    print()
