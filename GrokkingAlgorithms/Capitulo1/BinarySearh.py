import math
#Tenemos una lista ordenada
lista=[0,1,2,3,4,5,6,7,8,9,10]
#La primera y ultima posicion del la lista
low=0
high=len(lista)-1
#Comprobar un elemento
item=0
#El que esta en la posicion de la mitad se redondea hacia arriba
elementosmedio=math.ceil((low+high)/2)
supuesto=lista[elementosmedio]
#Hacer la verificacion
if item>supuesto:
    #pasaria a ser el medio +1 ya que esos elemenentos son mas bajos que el que buscamos
    low=elementosmedio+1 
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