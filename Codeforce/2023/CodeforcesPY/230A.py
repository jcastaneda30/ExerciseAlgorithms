n=input().split()
daño,dragones=map(int,n)
diccionario={}
for i in range(dragones):
    entrada=[int(x) for x in input().split()]
    if entrada[0] not in diccionario:
        diccionario[entrada[0]]=entrada[1]
    elif entrada[0] in diccionario:
        diccionario[entrada[0]]=diccionario[entrada[0]]+entrada[1]
llaves=list(diccionario.keys())
llaves.sort()
diccionarioOrdenado={}
for key in llaves:
  diccionarioOrdenado[key] = diccionario[key]
victoria=True
for i in diccionarioOrdenado:
    if daño>i:
        daño=daño+diccionario[i]
    else:
        victoria=False
if victoria==True:
    print("YES")
else:
    print("NO")