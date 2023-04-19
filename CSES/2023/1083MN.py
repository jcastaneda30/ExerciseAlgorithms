import sys
n=int(input())
entrada=[int(x) for x in (sys.stdin.readline().strip()).split()]
entrada.sort()
entrada2=[x for x in range(1,n+1)]
numero=list(set(entrada2)-set(entrada))
print(numero[0])