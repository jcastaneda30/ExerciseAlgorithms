N = int(input())

letras = input()
takahashi =0
aoki =0
Ganador = ""
Ganancias = 0
for i in letras:
    if i=='T':
        takahashi+=1
    else:
        aoki +=1
    if takahashi>Ganancias:
        Ganador='T'
        Ganancias = takahashi
    elif aoki>Ganancias:
        Ganador='A'    
        Ganancias = aoki
print(Ganador)