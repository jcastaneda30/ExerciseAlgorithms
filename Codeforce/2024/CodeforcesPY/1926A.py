casos = int(input())

for i in range(casos):
    a=0
    b=0
    letras = input()
    for j in letras:
        if j == 'A':
            a+=1
        else:
            b+=1
    if(a>=b):
        print("A")
    else:
        print("B")