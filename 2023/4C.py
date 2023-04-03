cantidad=int(input())
diccionario={}
for i in range(cantidad):
    entrante=input()
    if entrante not in diccionario:
        print("OK")
        diccionario[entrante]=1
    else:
        print(f"{entrante+str(diccionario[entrante])}")
        diccionario[entrante]+=1
