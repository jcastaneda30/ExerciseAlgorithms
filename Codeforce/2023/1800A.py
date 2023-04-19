casos=int(input())
for i in range(casos):
    a=input()
    lista=[]
    letras=input().lower()
    m=0
    e=0
    o=0
    w=0
    cosa=True
    for i in letras:
        if i not in lista:
            lista.append(i)
            if i=="m":
                m=m+1
            if i=="e":
                e=e+1
            if i=="o":
                o=o+1
            if i=="w":
                w=w+1
        else:
            if i=="m" and e==0 and o==0 and w==0:
                m=m+1
            elif i=="m":
                cosa=False
            if i=="e" and m>0 and o==0 and w==0:
                m=m+1
            elif i=="e":
                cosa=False
            if i=="o" and m>0 and e>0 and w==0:
                m=m+1
            elif i=="o":
                cosa=False
            if i=="w" and e>0 and o>0 and m>0:
                m=m+1
            elif i=="w":
                cosa=False
    if cosa!=False:
        if "".join(lista)=='meow':
            print("YES")
        else:
            print("NO")
    else:
        print("NO")