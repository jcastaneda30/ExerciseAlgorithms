def binarySearch(lista,numero):
    low=0
    high=len(lista)-1
    while low<=high:
        mid = (low+high)//2
        if lista[mid]==numero:
            return True
        elif lista[mid]>numero:
            high=mid-1
        elif lista[mid]<numero:
            low=mid+1
    return False
XD=1000000000000
def precalculo():
    lista=[]
    i=1
    while i*i*i<=XD:
        lista.append(i*i*i)
        i=i+1
    return lista
lista=precalculo()
casos=int(input())
for i in range(casos):
    numero=int(input())
    cosa=False
    i=1
    while i*i*i<numero:
        b=numero-i*i*i
        if binarySearch(lista,b)==True:
            print("YES")
            cosa=True
            break
        else:
            cosa=False
        i=i+1
    if cosa==False:
        print("NO")