import sys

entrada=(sys.stdin.readline().strip())
numeros=[int(x) for x in (sys.stdin.readline().strip()).split()]
count=0
minimo=numeros[0]
maximo=numeros[0]
for i in range(1,len(numeros)):
    if  numeros[i]>maximo:
        count+=1
        maximo=numeros[i]
    elif numeros[i]<minimo:
        count+=1
        minimo=numeros[i]
sys.stdout.write(str(count))