n=int(input())
for i in range(n):
    cantidad=int(input())
    lista=[]
    binario=""
    cosa=True
    for k in range(cantidad):
        string=input()
        lista.append(string)
    for t in lista:
        elemento=t
        longitud=len(binario)
        for i in range(len(lista)):
            if len(lista[i])>=len(elemento):
                continue
            for h in range(len(lista)):
                if len(lista[h])>=len(elemento):
                    continue
                if lista[i]+lista[h]==elemento:
                    binario+="1"
                    cosa=False
                    break
            if cosa==False:
                cosa=True
                break
        if longitud==len(binario):
            binario+="0"
    print(binario)
