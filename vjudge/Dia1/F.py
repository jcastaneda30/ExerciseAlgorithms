cadena = input()
pre1 = [0]*(len(cadena)+1)
pre0 = [0]*(len(cadena)+1)

for i in range(1,len(cadena)+1):
    if cadena[i-1]=='1':
        pre1[i]=pre1[i-1]+1
    else:
        pre1[i]=0
        
for i in range(1,len(cadena)+1):
    if cadena[i-1]=='0':
        pre0[i]=pre0[i-1]+1
    else:
        pre0[i]=0

if 7 in pre1 or 7 in pre0:
    print("YES")
else:
    print("NO")