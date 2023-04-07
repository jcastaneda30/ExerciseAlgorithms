n=int(input())
ganadorGold=0
ganadorSilver=0
ganadorBronce=0
countryWinner=0
for i in range(n):
    entrada=input().split()
    g,s,b=map(int,entrada[:3])
    for i in range(3):
        entrada.pop(0)
    country=" ".join(entrada)
    if g>ganadorGold:
        ganadorGold=g
        ganadorSilver=s
        ganadorBronce=b
        countryWinner=country
    elif ganadorGold==g:
        if s>ganadorSilver:
            ganadorSilver=s
            ganadorBronce=b
            countryWinner=country
        elif ganadorSilver==s:
            if b>ganadorBronce:
                ganadorBronce=b
                countryWinner=country
print(countryWinner)


    