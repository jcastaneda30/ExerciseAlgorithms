n=int(input())
for i in range(n):
    cantidad=int(input())
    diccionario={}
    binario=""
    lista=[]
    cosa=True
    for k in range(cantidad):
        string=input()
        diccionario[string]=0
        lista.append(string)
    for i in lista:
        elemento=i
        longitud=len(binario)
        for p in range(len(i)):
            if elemento[:p+1] in diccionario and elemento[p+1:] in diccionario:
                binario+="1"
                break
        if longitud==len(binario):
           binario+="0"
    print(binario)