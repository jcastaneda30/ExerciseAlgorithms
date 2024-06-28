n,m=map(int,input().split())

palabras = []

for i in range(n):
    palabra=input()
    palabras.append(palabra)
    
final=""
for i in range(m):
    diccionario=dict()
    maximo=-1
    for j in range(n): 
        if palabras[j][i] not in diccionario:
            diccionario[palabras[j][i]]=1
        else:
            diccionario[palabras[j][i]]+=1
        maximo=max(maximo,diccionario[palabras[j][i]])
    letras=[]
    for h in diccionario.keys():
        if diccionario[h]==maximo:
            letras.append(h)
    letras.sort()
    final+=letras[0]
print(final)
            
    
    
    
    