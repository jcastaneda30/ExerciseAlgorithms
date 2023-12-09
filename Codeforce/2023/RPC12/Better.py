lados = int(input())
dadoFirst = list(map(int, input().split()))
dadoSecond = list(map(int, input().split()))
diccionarioFirst = {}
diccionarioSecond = {}

for i in dadoFirst:
    diccionarioFirst[i] = 0
for i in dadoSecond:
    diccionarioSecond[i] = 0

for i in dadoFirst:
    for j in dadoSecond:
        if i < j:
            diccionarioFirst[i] += 1

for i in dadoSecond:
    for j in dadoFirst:
        if i < j:
            diccionarioSecond[i] += 1

sumaFirst = sum(diccionarioFirst.values())
sumaSecond = sum(diccionarioSecond.values())

if sumaSecond > sumaFirst:
    print("first")
elif sumaSecond < sumaFirst:
    print("second")
else:
    print("tie")
