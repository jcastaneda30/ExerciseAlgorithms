casos=int(input())
for i in range(casos):
    xd = input()
    Mihai=0
    Bianca =0
    entrada=[int(x) for x in input().split()]
    for i in entrada:
        if i%2==0:
            Mihai=Mihai+i
        else:
            Bianca=Bianca+i
    if Mihai>Bianca:
        print("YES")
    else:
        print("NO")
