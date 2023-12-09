import random

# Generar 100 números aleatorios entre 1 y 100
numeros_aleatorios = [random.randint(1, 100) for _ in range(50)]

# Guardar los números en un archivo de texto en una sola línea
with open("numeros_aleatorios.txt", "w") as archivo:
    archivo.write(', '.join(map(str, numeros_aleatorios)))

print("Se han generado y guardado 100 números aleatorios en una línea en 'numeros_aleatorios.txt'")

