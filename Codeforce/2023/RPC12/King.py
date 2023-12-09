import math

cantidad = int(input())
puntos = []

for i in range(cantidad):
    x, y = map(int, input().split())
    puntos.append((x, y))

distancia = 999999999

for puntoPivote in puntos:
    sumaDistancias = 0

    for puntoAlejados in puntos:
        sumaDistancias += math.sqrt((puntoPivote[0] - puntoAlejados[0]) ** 2 + (puntoPivote[1] - puntoAlejados[1]) ** 2)

    distancia = min(distancia, sumaDistancias / (cantidad - 1))

print("{:.9f}".format(distancia))
