n=int(input())
for i in range(n):
    entrada=[int(x) for x in input().split()]
    if entrada[2]>entrada[0] and entrada[2]>entrada[1]:
        print("+")
    else:
        print("-")