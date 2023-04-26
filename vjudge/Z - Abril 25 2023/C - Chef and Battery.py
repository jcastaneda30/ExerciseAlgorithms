casos= int(input())
for i in range(casos):
    carga=int(input())
    timer=0
    while(True and carga!=50):
        if carga<50:
            timer=timer+1
            carga=carga+2
        elif carga>50:
            timer=timer+1
            carga=carga-3
    print(timer)
