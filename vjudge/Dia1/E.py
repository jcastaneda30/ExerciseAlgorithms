n = int(input())
cadena = input()
counter = 0

for i in range(n):
    if cadena[i]=='8':
        counter+=1

numero=n//11

if numero>=counter:
    print(counter)
else:
    print(numero)