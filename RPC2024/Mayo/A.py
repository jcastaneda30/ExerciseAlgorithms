import math

half, full = map(int,input().split())

if(half>=math.ceil(full/2)):
    print("E")
else:
    print("H")