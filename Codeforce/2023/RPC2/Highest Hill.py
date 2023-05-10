montanas = int(input())
listaMontanas = list(map(int,input().split()))
listaSubidas=[]
listaBajadas=[]
listaAuxiliar=[]
for i in range(1,montanas):
    if listaMontanas[i]>=listaMontanas[i-1]:
        listaAuxiliar.append(listaMontanas[i-1])
    else:
        if len(listaAuxiliar)>0:
            listaAuxiliar.append(listaMontanas[i-1])
            listaSubidas.append(listaAuxiliar[-1]-listaAuxiliar[0])
            listaAuxiliar=[]

listaAuxiliar=[]
for i in range(1,montanas):
    if listaMontanas[i]<=listaMontanas[i-1]:
        listaAuxiliar.append(listaMontanas[i-1])
    else:
        if len(listaAuxiliar)>0:
            listaAuxiliar.append(listaMontanas[i-1])
            listaBajadas.append(listaAuxiliar[0]-listaAuxiliar[-1])
            listaAuxiliar=[]
if len(listaBajadas)==0:
    listaAuxiliar.append(listaMontanas[-1])
    listaBajadas.append(listaAuxiliar[0]-listaAuxiliar[-1])
    listaAuxiliar=[]
if len(listaSubidas)==0:
    listaAuxiliar.append(listaMontanas[-1])
    listaSubidas.append(listaAuxiliar[-1]-listaAuxiliar[0])
    listaAuxiliar=[]
listaxd=[]
# print(listaSubidas)
# print(listaBajadas)
for i in range(len(listaSubidas)):
        listaxd.append(min(listaBajadas[i],listaSubidas[i]))
print(max(listaxd))
