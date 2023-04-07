import math

entrada=input()
n,m,a=map(int,entrada.split())
total=math.ceil(n/a)*math.ceil(m/a)
print(total)