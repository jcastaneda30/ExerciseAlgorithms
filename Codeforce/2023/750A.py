minutos=240
problemas,minutoscasa=map(int,input().split())
tiempototal=minutos-minutoscasa
count=0
while(tiempototal>=0):
    count=count+1
    tiempototal=tiempototal-count*5
    if tiempototal<0:
        count=count-1
    if count==problemas:
        break
print(count)