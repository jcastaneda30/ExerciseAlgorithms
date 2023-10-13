import math
while True:
    try:
        tiempoTotal , camisa , sueter = map(int,input().split())
        tiempoMax = max(camisa,sueter)
        tiempoMin = min(camisa,sueter)
        if(tiempoTotal%camisa==0 or tiempoTotal%sueter==0):
            print(0)
            continue
        tiempoMaxGrande = (math.ceil(tiempoTotal/tiempoMax)-1)*tiempoMax
        tiempoMinGrande = (math.ceil(tiempoTotal/tiempoMin)-1)*tiempoMin

        existenciaMin = min(tiempoTotal-tiempoMaxGrande,tiempoTotal-tiempoMinGrande)
        contador=0
        situacion = True
        while True:
            tiempoProvicional = tiempoMaxGrande-tiempoMax*contador
            if(tiempoProvicional<0):
                break
            intervalo = tiempoTotal-tiempoProvicional
            if(intervalo%tiempoMin==0):
                situacion = False
                break
            else:
                existenciaMin=min(existenciaMin,intervalo%tiempoMin)
            contador+=1

        if situacion:
            print(existenciaMin)
        else:
            print(0)

                



    except EOFError:
        break