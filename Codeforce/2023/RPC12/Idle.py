n,k=map(int,input().split())
procesos = [int(x) for x in input().split()]
EnProcesamiento=[]
maximo = max(procesos) if k == 1 else -1
while len(procesos)>0 or len(EnProcesamiento)>0:
    for i in range(k-len(EnProcesamiento)):
        if len(procesos)>0:
            EnProcesamiento.append(procesos.pop(0))
    value = min(EnProcesamiento)
    EnProcesamiento=[elemento-value for elemento in EnProcesamiento if elemento-value>0]
    maximo=max(maximo,value)
print(maximo)
