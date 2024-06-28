n = int(input())
lista = [int(x) for x in input().split()]

counterMax = 1
counter = 1
for i in range(1,n):
    if(lista[i]>lista[i-1]):
        counter+=1
        counterMax= max(counterMax,counter)
    else:
        counter=1
print(counterMax)