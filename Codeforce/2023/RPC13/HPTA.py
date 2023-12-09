valores = input().split()
waos = [(valores[0]+valores[1]+valores[2]),
        (valores[0]+valores[2]+valores[1]),
        (valores[1]+valores[0]+valores[2]),
        (valores[1]+valores[2]+valores[0]),
        (valores[2]+valores[0]+valores[1]),
        (valores[2]+valores[1]+valores[0])]
maximo = max(waos)
print(maximo)