n=input()
lista=[]
for i in n:
    if i not in lista:
        lista.append(i)
if len(lista)%2!=0:
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!") 