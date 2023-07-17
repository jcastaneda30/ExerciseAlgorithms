numeros=[int(x) for x in input().split()]
numeros.sort()
min1=numeros[0]
max2=numeros[2]
distanciaTotal=numeros[1]-numeros[0]+numeros[2]-numeros[1]
print(distanciaTotal)