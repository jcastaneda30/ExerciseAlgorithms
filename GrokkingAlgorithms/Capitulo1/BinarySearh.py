
#Codigo completo
import math
#la lista debe estar ordenada
def binary_search(list, item):
		#El inicio de la lista
    low = 0
		#El inicio de la lista
    high = len(list)-1
		#un ciclo while para evitar repetir
    while low <= high:
				#la posicion media de la lista
        mid = math.ceil((low + high)/2)
				#El valor que tiene esa posicion
        guess = list[mid]
				#Se hacen las comprobaciones para saber si el numero esta por encima
				#o por debajo o si ya lo encontramos
        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    return None

print(binary_search(lista,3))