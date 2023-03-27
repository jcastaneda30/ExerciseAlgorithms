letras=list("HQ9")
n=input()
for i in range(len(n)):
    if n[i] in letras:
        print("YES")
        break
    if i==len(n)-1:
        print("NO")
        break