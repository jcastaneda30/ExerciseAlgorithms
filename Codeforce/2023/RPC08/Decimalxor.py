a=input()
b=input()
cadena=""
if(len(a)>len(b)):
    for i in range(len(a)-len(b)):
        b="0"+b
elif(len(a)<len(b)):
    for j in range(len(b)-len(a)):
        a="0"+a
for i in range(len(a)):
    if int(a[i])>=7 and int(b[i])>=7:
        cadena+="0"
    elif  int(a[i])<=2 and int(b[i])<=2:
        cadena+="0"
    else:
        cadena+="9"
print(cadena)