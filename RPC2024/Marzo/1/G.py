import math

def distancia(puntoA,puntoB):
    return ((puntoA[0]-puntoB[0])**2+(puntoA[1]-puntoB[1])**2)**0.5 

def angulo_entre_puntos(punto2, punto1, punto3):
    distancias = [distancia(punto1,punto2),distancia(punto1,punto3),distancia(punto2,punto3)]
    
    formula = math.acos((distancias[0]**2+distancias[1]**2-distancias[2]**2)/(2*distancias[0]*distancias[1]))

    return math.degrees(formula)


def angulos_entre_cuatro_puntos(punto1, punto2, punto3, punto4):
    angulos = []

    angulos.append(round(angulo_entre_puntos(punto1, punto2, punto3),3))
    angulos.append(round(angulo_entre_puntos(punto2, punto3, punto4),3))
    angulos.append(round(angulo_entre_puntos(punto3, punto4, punto1),3))
    angulos.append(round(angulo_entre_puntos(punto4, punto1, punto2),3))

    return angulos

def cuadrado(punto1,punto2,punto3,punto4):
    angulos = set(angulos_entre_cuatro_puntos(punto1,punto2,punto3,punto4))
    lados = set([distancia(punto1,punto2),distancia(punto2,punto3),distancia(punto3,punto4),distancia(punto4,punto1)])
    return len(angulos)==1 and 90.0 in angulos and len(lados)==1
    
def rectangulo(punto1,punto2,punto3,punto4):
    angulos = set(angulos_entre_cuatro_puntos(punto1,punto2,punto3,punto4))
    return len(angulos)==1 and 90.0 in angulos

def rombo(punto1,punto2,punto3,punto4):
    lados = set([distancia(punto1,punto2),distancia(punto2,punto3),distancia(punto3,punto4),distancia(punto4,punto1)])
    return len(lados)==1

def pendiente(punto1,punto2):
    return (punto1[1]-punto2[1])/(punto1[0]-punto2[0])

def paralelogramo(punto1,punto2,punto3,punto4):
    lados = set([pendiente(punto1,punto2),pendiente(punto2,punto3),pendiente(punto3,punto4),pendiente(punto4,punto1)])
    return len(lados)==2

def trapecio(punto1,punto2,punto3,punto4):
    lados = set([pendiente(punto1,punto2),pendiente(punto2,punto3),pendiente(punto3,punto4),pendiente(punto4,punto1)])
    return len(lados)==3

def longestDiagonal(punto1, punto2, punto3, punto4):
    d1 = ((punto1[0] - punto3[0])**2 + (punto1[1] - punto3[1])**2)**0.5
    d2 = ((punto2[0] - punto4[0])**2 + (punto2[1] - punto4[1])**2)**0.5
    if d1 > d2:
        return [punto1, punto3]
    else:
        return [punto2, punto4]
    
def isKite(punto1, punto2, punto3, punto4):
    valor = longestDiagonal(punto1, punto2, punto3, punto4)
    if(valor==[punto1,punto3]):
        if(distancia(punto1,punto2)==distancia(punto1,punto4) and distancia(punto2,punto3)==distancia(punto3,punto4) and angulo_entre_puntos(punto1,punto2,punto3) == angulo_entre_puntos(punto3, punto4,punto1)):
            return True
    elif(valor==[punto2,punto4]):
        if(distancia(punto2,punto3)==distancia(punto1,punto2) and distancia(punto3,punto4)==distancia(punto1,punto4) and angulo_entre_puntos(punto2,punto3,punto4) == angulo_entre_puntos(punto4, punto1,punto2)):
            return True


punto1 = [int(x) for x in input().split()]
punto2 = [int(x) for x in input().split()]
punto3 = [int(x) for x in input().split()]
punto4 = [int(x) for x in input().split()]

if(cuadrado(punto1,punto2,punto3,punto4)):
    print("square")
elif(rectangulo(punto1,punto2,punto3,punto4)):
    print("rectangle")
elif(rombo(punto1,punto2,punto3,punto4)):
    print("rhombus")
elif(paralelogramo(punto1,punto2,punto3,punto4)):
    print("parallelogram")
elif(trapecio(punto1,punto2,punto3,punto4)):
    print("trapezium")
elif(isKite(punto1,punto2,punto3,punto4)):
    print("kite")
else:
    print("none")