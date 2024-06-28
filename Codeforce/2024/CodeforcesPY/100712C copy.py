import math

t = int(input())

for _ in range(t): 
    n = int(input())
    lamps = list(input())
    
    if len(lamps) <= 2:
        if '*' in lamps:
            print(0)
        else:
            print(1)
        continue
    
    counter = 0
    
    for j in range(n):  
        if lamps[j] == '*':
            if j - 1 >= 0 and lamps[j - 1] == '.':
                lamps[j - 1] = '_'
            if j + 1 < n and lamps[j + 1] == '.':
                lamps[j + 1] = '_'
    distancia = 0
    monda = False
    for k in range(n):
        if(lamps[k]=='.'):
            monda=True
            if(k==n-1 and lamps[k]=='.'):
                counter+=math.ceil((k-distancia)/3)
        if(lamps[k]=='_' or lamps=='*'):
            if monda: 
                if(lamps[distancia]=='.'):
                    counter+=math.ceil((k-distancia)/3)
                else:
                    counter+=math.ceil((k-distancia-1)/3)
            distancia = k
            monda = False
    if '*' not in lamps:
        counter=math.ceil((n)/3)
    print(counter)