n=input().lower()
k=input().lower()
lista=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
if n==k:
    print("0")
for i in range(len(n)):
        a=lista.index(n[i])
        b=lista.index(k[i])
        if a!=b:
            if a>b:
                print("1")
                break
            elif a<b:
                print("-1")
                break