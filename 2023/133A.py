letras=list("HQ9")
n=input()
for i in range(len(n)):
    if i in letras:
        print("YES")
        break
    if i==n[-1]:
        print("NO")
        break