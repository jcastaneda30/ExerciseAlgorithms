t = int(input())

for i in range(t):
    n = int(input())
    calificaciones = [int(x) for x in input().split()]
    counter = 0
    maximo = 0
    listaPerdedores = []
    for j in range(len(calificaciones)):
        maximo = max(maximo,calificaciones[j])
        if(calificaciones[j]<50):
            listaPerdedores.append(50-calificaciones[j])
        else:
            counter+=1
    listaPerdedores.sort()
    for j in range(len(listaPerdedores)):
        if(listaPerdedores[j]+maximo<=100):
            counter+=1
    print(counter)