n,d=map(int,input().split())
d=str(d)
m = n+1

while True:
    cadena = str(m)
    if  cadena[-1] == d:
        print(cadena)
        break
    else:
        m+=1