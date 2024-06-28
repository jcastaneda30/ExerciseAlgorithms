import random

# Número de pares a generar
num_pares = 10000

# Generar y guardar los pares en un archivo llamado 'pares.txt'
with open('pares.txt', 'w') as archivo:
    for _ in range(num_pares):
        x = random.randint(1, 2)  # Número aleatorio entre 1 y 2 (inclusive)
        y = random.randint(1, 100000)  # Número aleatorio entre 1 y 100,000 (inclusive)
        
        # Escribir el par en el formato "x y" en el archivo
        archivo.write(f"{x} {y}\n")

print("Pares guardados en 'pares.txt'")
