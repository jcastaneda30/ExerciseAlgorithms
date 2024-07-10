n = int(input())

array = [int(x) for x in input().split()]

coutner = 0

for i in range(1,n):
    if array[i]<array[i-1]:
        coutner+=array[i-1]-array[i]
        array[i]=array[i-1]

print(coutner)