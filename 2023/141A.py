invitado=input()
dueño=input()
daño=list(input())
nueva=invitado+dueño
cosa=True
for i in nueva:
    if i in daño:
        daño.remove(i)
    else:
        cosa=False
if len(daño)!=0:
    cosa=False
if cosa==True:
    print("YES")
else:
    print("NO")