import random

def generate_test_cases(n, m, filename):
    with open(filename, 'w') as file:
        # Escribir el tamaño de la matriz en el archivo
        file.write(f"{n} {m}\n")

        # Escribir los elementos de la matriz en el archivo
        for _ in range(n):
            file.write(f"{random.randint(1, 100000000)}\n")

# Leer los valores de entrada para el tamaño de la matriz
n, m = map(int, input("Ingrese los valores de 'n' y 'm': ").split())

# Nombre del archivo donde se guardarán los casos de prueba
filename = input("Ingrese el nombre del archivo donde desea guardar los casos de prueba: ")

# Generar y guardar los casos de prueba en el archivo especificado
generate_test_cases(n, m, filename)
