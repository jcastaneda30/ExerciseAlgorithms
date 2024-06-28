t = int(input())

for i in range(t):
    n = int(input())
    lamps = list(input())
    if len(lamps)<=2:
        if '*' in lamps:
            print(0)
            continue
        else:
            print(1)
            continue
    counter = 0    
    if lamps[0]=='.' and lamps[2]=='*':
        lamps[0] = '*'
        counter+=1
    if n>=5 and lamps[-3]=='*' and lamps[-1]=='.':
        lamps[-1] = '*'
        counter += 1
    
    for i in range(1,n-1):
        if(lamps[i-1]=='.' and lamps[i]=='.' and lamps[i+1]=='.'):
            counter+=1
            lamps[i-1]='*'
            lamps[i]='*'
            lamps[i+1]='*'
    print(counter)