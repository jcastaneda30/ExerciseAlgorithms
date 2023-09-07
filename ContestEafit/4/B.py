n,m=map(int, input().split())
a=n
b=m
cadena=[]
turno=True
if(n==m):
    for i in range(a+b):
        if(turno):
            cadena.append("B")
            turno=False
        else:
            cadena.append("G")
            turno=True
elif(n>m):
    for i in range(a+b):
        if(turno or m==0):
            if(n>0):n-=1
            cadena.append("B")
            turno=False
        elif(m>0):
            m-=1
            cadena.append("G")
            turno=True
else:
    for i in range(a+b):
        if(turno or n==0):
            m-=1
            cadena.append("G")
            turno=False
        elif(n>0):
            n-=1
            cadena.append("B")
            turno=True
print("".join(cadena))