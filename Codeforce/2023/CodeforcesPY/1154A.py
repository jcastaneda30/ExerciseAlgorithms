entrada=[int(x) for x in input().split()]
abc=max(entrada)
for i in range(len(entrada)):
    if entrada[i]!=abc:
        print(abc-entrada[i],end=" ")