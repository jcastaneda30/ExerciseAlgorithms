def binario():
    n = int(input())
    if n & (n-1):
        print(bin(n))
        print(bin(n-1))
        print("YES")
    else:
        print(bin(n))
        print(bin(n-1))
        print("NO")

n = int(input())
for x in range(n):
    binario()
