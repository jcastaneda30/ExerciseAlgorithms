numero = input()
decimales = ''
enteros = ''
if '.' in numero:
    a,b = numero.split('.')
    if(len(b)>=2):
        b=b[0:2]
    else:
        b=b+'0'
    decimales=b
    enteros=a
else:
    enteros=numero
    decimales='00'

enteros=list(enteros)
negativo = '-' in enteros
if negativo:
    enteros.remove('-')
counter = 1
nueva = [enteros[-1]]
for i in range(len(enteros)-2,-1,-1):
    if counter%3==0:
        nueva.append(',')
    counter+=1
    nueva.append(enteros[i])
nueva.reverse()

if(negativo):
    print(f"(${''.join(nueva)}.{decimales})")
else:
    print(f"${''.join(nueva)}.{decimales}")