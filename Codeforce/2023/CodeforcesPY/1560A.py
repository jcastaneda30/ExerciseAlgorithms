lista=[]
for i in range(1,1666+1):
    if(i%3!=0 and i%10 != 3):
        lista.append(i)
casos=int(input())
for i in range(casos):
    posicion=int(input())-1
    print(lista[posicion])
