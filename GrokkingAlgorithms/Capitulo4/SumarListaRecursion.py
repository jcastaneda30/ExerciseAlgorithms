def SumarLista(lista):
    if len(lista)==0:
        return 0
    else:
        return lista.pop(0)+SumarLista(lista)

a=[1,2,3,4,5]
print(SumarLista(a))