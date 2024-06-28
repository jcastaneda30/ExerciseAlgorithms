N = int(input())
John=list(map(int,input().split()))
Amy=list(map(int,input().split()))
cartas=list(map(int,input().split()))
baraja = dict()

for i in range(1,14):
    baraja[i]=4
            
for i in range(2):        
    baraja[John[i]]-=1
    baraja[Amy[i]]-=1

for i in range(N):
    baraja[cartas[i]]-=1
        
provisional_Amy = [10 if x > 10 else x for x in Amy]
provisional_John = [10 if x > 10 else x for x in John]
provisional_cartas = [10 if x > 10 else x for x in cartas]

if(sum(provisional_Amy)+sum(provisional_cartas)<13 and sum(provisional_John)+sum(provisional_cartas)<14):
    print(-1)
else:
    romper=24-sum(provisional_John)-sum(provisional_cartas)
    ganarAmy=23-sum(provisional_Amy)-sum(provisional_cartas)
    perderAmy=24-sum(provisional_Amy)-sum(provisional_cartas)

    if ganarAmy<=romper:
        if(baraja[ganarAmy]):
            print(ganarAmy)
        else:
            print(-1)
    else:
        while(baraja[romper]==0):
            romper+=1
            if(romper>=perderAmy):
                print(-1)
                break
        print(romper)