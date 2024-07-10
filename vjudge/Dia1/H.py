import math
t = int(input())

for i in range(t):
    one, two = map(int,input().split())
    MinimoTwo = math.ceil(two/2)
    libres = MinimoTwo*15 - two*4
    if libres>=one:
        print(MinimoTwo)
    else:
        one = one-libres
        MinimoOne = math.ceil(one/15)
        print(MinimoOne+MinimoTwo)