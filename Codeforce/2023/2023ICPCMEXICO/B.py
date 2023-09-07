import math

N,K,L=map(int, input().split())
frijoles=N*K
LatasL=frijoles/L
print(math.ceil(LatasL))