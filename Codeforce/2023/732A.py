costo,coin=map(int,input().split())
palas=0
while (costo*palas%10)-coin!=0:

    palas=palas+1

    if costo*palas%10==0:
        break
print(palas)
