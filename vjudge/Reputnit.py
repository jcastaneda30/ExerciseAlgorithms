def generate_repunits(N):
    repunits = []
    
    for i in range(1, N + 1):
        for j in range(1, N + 1):
            for k in range(1, N + 1):
                repunit_sum = i * 1 + j * 11 + k * 111
                repunits.append(repunit_sum)
                
    return sorted(repunits)

# Input
N = int(input())

# Generar la secuencia de repunits y calcular la suma
repunit_sequence = generate_repunits(N)

# Imprimir la secuencia
for repunit_sum in repunit_sequence:
    print(repunit_sum)
