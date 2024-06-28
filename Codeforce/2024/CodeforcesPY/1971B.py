t = int(input())

for i in range(t):
    s = list(input())
    cantidad = set(s)
    if(len(cantidad)==1):
        print("NO")
        continue
    for i in range(len(s)-1):
        if(s[i]!=s[i+1]):
            s[i],s[i+1]=s[i+1],s[i]
            print("YES")
            print(''.join(s))
            break