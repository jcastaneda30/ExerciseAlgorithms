cantidad = int(input())

for i in range(cantidad):
    entrada = [int(x) for x in input().split()]
    if entrada[0]==entrada[1]:
        print("Square")
    else:
        print("Rectangle")