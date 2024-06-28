def generar_combinaciones_recursivas(prefijo, longitud, lista):
    if longitud == 0:
        lista.append(int(prefijo))
    else:
        generar_combinaciones_recursivas(prefijo + '0', longitud - 1,lista)
        generar_combinaciones_recursivas(prefijo + '1', longitud - 1,lista)
lista=[]
for longitud in range(1, 6):
    print(f"Combinaciones de longitud {longitud}:")
    generar_combinaciones_recursivas('', longitud,lista)
print(len(lista))
