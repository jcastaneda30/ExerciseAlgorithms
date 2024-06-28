cards = []
cartas = int(input())

# Bucle para leer las cartas línea por línea
while True:
    try:
        line = input().strip()

        # Verificar si la línea está vacía (EOF)
        if not line:
            break

        # Convertir letras a números y agregar al array
        card_row = [10 if c == 'T' else 11 if c == 'J' else 12 if c == 'Q' else 13 if c == 'K' else 1 if c == 'A' else int(c) for c in line.split()]

        cards.extend(card_row)
    except EOFError:
        break
count_combinaciones = 0

sumas = [10 if c >10 else c for c in cards]
conteo_ocurrencias = {}

# Bucle para contar las ocurrencias
for elemento in sumas:
    if elemento in conteo_ocurrencias:
        # Incrementar el conteo si el elemento ya está en el diccionario
        conteo_ocurrencias[elemento] += 1
    else:
        # Agregar el elemento al diccionario si es la primera vez que se encuentra
        conteo_ocurrencias[elemento] = 1
        
for i in range(len(cards)):
    # Bucle para la segunda cifra
    for j in range(len(cards)):
        suma_combinacion = cards[i] + cards[j]
        # Bucle para la tercera cifra
        for k in range(len(cards)):
            suma_combinacion = cards[i] + cards[j] + cards[k] 
            # Bucle para la cuarta cifra
            for l in range(len(cards)):
                suma_combinacion = cards[i] + cards[j] + cards[k] + cards[l]
                if(suma_combinacion==15):
                    
                # Bucle para la quinta cifra
                for m in range(len(cards)):
                    suma_combinacion = cards[i] + cards[j] + cards[k] + cards[l] + cards[m]
                        
cards.sort()

