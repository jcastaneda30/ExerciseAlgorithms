def busquedaBinaria(lista,number):
    low=0
    alto=len(lista)-1

    mid = ((low+alto)//2) + 1
    while low<alto:
        if number == lista[mid]:
            return mid
        elif lista[mid]>number:
            alto=mid-1
        else:
            low = mid + 1 

casos=int(input())
for i in range(casos):
    a,b=map(int,input().split())
    
