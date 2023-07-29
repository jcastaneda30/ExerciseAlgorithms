t = int(input())
for i in range(t):
    a=int(input())
    ganador=0

    qualityy=0
    for h in range(a): 
        lengt,quality=map(int,input().split())
        if quality>qualityy and lengt<=10:
            ganador=h+1
            qualityy=quality
    print(ganador)