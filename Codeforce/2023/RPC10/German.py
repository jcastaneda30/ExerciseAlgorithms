entrada = int(input())
modulo=0
i=1
while(i<1E9+1):
    if(entrada%i<entrada):
        modulo=i
    else:
        break
    i*=10
numero=len(str(modulo))-1
waos=numero*10
if entrada<10:
    print(entrada+1)
elif entrada==modulo:
    print(numero*10)
else:
    for i in range(1,10):
        cadena=int(str(i)*(numero+1))
        if entrada>=cadena:
            waos = numero*10+i
    print(waos)
        
