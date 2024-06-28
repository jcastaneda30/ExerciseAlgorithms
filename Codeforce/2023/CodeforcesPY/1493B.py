def reflejar(hora, minuto):
    hora=str(hora)
    minuto=str(minuto)
    hora = '0' + hora if len(hora) < 2 else hora
    minuto = '0' + minuto if len(minuto) < 2 else minuto
    
    if hora[0] == '5':
        hora = '2' + hora[1]
    elif hora[0] == '2':
        hora = '5' + hora[1]

    if hora[1] == '5':
        hora = hora[0] + '2'
    elif hora[1] == '2':
        hora = hora[0] + '5'

    if minuto[0] == '5':
        minuto = '2' + minuto[1]
    elif minuto[0] == '2':
        minuto = '5' + minuto[1]

    if minuto[1] == '5':
        minuto = minuto[0] + '2'
    elif minuto[1] == '2':
        minuto = minuto[0] + '5'
    
    horaAux=minuto[1]+minuto[0]
    minAux=hora[1]+hora[0]
    return horaAux,minAux
    

casos = int(input())
numbers=['9','7','6','4','3']
for i in range(casos):
    h,m=map(int,input().split())
    hora=input()
    tiempoHora=int(hora.split(':')[0])
    tiempoMin=int(hora.split(':')[1])
    while True:
        oneTime=True
        Reflex=False
        
        for j in numbers:
            if j in hora:
                oneTime=False
                
                
        if(oneTime):
            juas=reflejar(tiempoHora,tiempoMin)
            if(int(juas[0])<h and int(juas[1])<m):
                Reflex=True
            
        if(oneTime and Reflex):
            print(hora)
            break
        
        if tiempoMin<m:
            tiempoMin=tiempoMin+1
        if tiempoMin==m:
            tiempoMin=0
            if tiempoHora<h:
                tiempoHora+=1
            if tiempoHora==h:
                tiempoHora=0
        horas = '0' + str(tiempoHora) if len(str(tiempoHora)) < 2 else str(tiempoHora)
        minutos = '0' + str(tiempoMin) if len(str(tiempoMin)) < 2 else str(tiempoMin)
        hora=horas+':'+minutos
        
               