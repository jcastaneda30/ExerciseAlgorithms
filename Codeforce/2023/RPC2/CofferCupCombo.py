lecturas = int(input())
listaMaquinas = list(input())
cafesEncima =0
contadorDeClases =0
for i in listaMaquinas:
    if i=="1":
        cafesEncima=2
        contadorDeClases= contadorDeClases+1
    elif i=="0" and cafesEncima>0:
        cafesEncima = cafesEncima - 1
        contadorDeClases = contadorDeClases + 1
print(contadorDeClases) 