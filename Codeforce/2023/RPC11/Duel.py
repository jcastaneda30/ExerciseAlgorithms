cantidad = int(input())
valor = list(map(int,input().split()))
quien=0
for i in range(cantidad):
    if(i+1!=valor[i]):
        quien+=1
if quien%2==0:
    print("Oh No!")
else:
    "xd"