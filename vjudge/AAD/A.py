cadena = input()
aa=True
for i in range(1,len(cadena)):
    if i%2!=0 and cadena[i]!='0':
        aa=False
if(aa):
    print("Yes")
else:
    print("No")