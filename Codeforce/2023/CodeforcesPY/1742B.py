import sys
casos = int(input())
for i in range(casos):
    xd = input()
    entrada = [int(x) for x in (sys.stdin.readline().strip()).split()]
    entrada2 = set(entrada)
    if len(entrada)==len(entrada2):
        print("YES")
    else:
        print("NO")