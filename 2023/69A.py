a=int(input())
lista=[]
for i in range(a):
    entrada=input().split()
    entrada=[int(x) for x in entrada]
    lista.append(entrada)
x=y=z=0
for i in lista:
    x+=i[0]
    y+=i[1]
    z+=i[2]
a=[x,y,z]
if all(value==0 for value in a):
    print("YES")
else:
    print("NO")