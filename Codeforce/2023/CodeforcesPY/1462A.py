casos = int(input())

for i in range(casos):
    tamanho = int(input())
    values = [x for x in input().split()]
    l=0
    r=tamanho-1
    end = []
    while(l<=r):
        if l<r:
            end.append(values[l])
            end.append(values[r])
            l+=1
            r-=1
        elif l==r:
            end.append(values[r])
            l+=1
            r-=1
    print(" ".join(end))
    