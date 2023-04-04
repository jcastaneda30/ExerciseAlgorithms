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
        for p in range(len(lista)-1):
            if elemento[:p+1] in lista and elemento[p+1:] in lista:
                binario+="1"
                break
        if longitud==len(binario):
            binario+="0"
    print(binario)
