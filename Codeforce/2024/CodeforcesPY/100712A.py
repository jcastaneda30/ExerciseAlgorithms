t = int(input())

for i in range(t):
    n = int(input())
    nombre=''
    problemas=0
    penalidad=2000
    for j in range(n):
        name, problems, penalty = map(str,input().split())
        problems = int(problems)
        penalty = int(penalty)
        if(problems>problemas):
            problemas=problems
            penalidad=penalty
            nombre=name
        elif problems==problemas and penalty<penalidad:
            problemas=problems
            penalidad=penalty
            nombre=name
    print(nombre)     
