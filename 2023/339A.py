n=input().split("+")
k=[int(x) for x in n]
k.sort()
for i in range(len(k)):
    if i != (len(k)-1):
        print(f"{k[i]}+",end="")
    else:
        print(k[i])
