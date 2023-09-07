entrada = int(input())
numero = entrada
while(1):
    numero+=1
    if(len(set(str(numero)))==len(str(numero))):
        print(numero)
        break