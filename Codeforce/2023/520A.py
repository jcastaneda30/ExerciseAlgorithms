n=int(input())
abecedario = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
palabra=input().lower()
cosa=True
if n>=26:
    for i in abecedario:
        if i in palabra:
            cosa=True
        else:
            cosa=False
            break
    if cosa==True:
        print("YES")
    else:
        print("NO")
else:
    print("NO")
