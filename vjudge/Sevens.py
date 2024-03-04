import sys

sys.stdin = open('breedflip.in', 'r')
sys.stdout = open('breedflip.out', 'w')

casos = int(input())

valores = []


for i in range(casos):
    valores.append(int(input()))

prefix = [0]*(casos+1)

for i in range(casos):
    prefix[i+1]=(prefix[i]+valores[i])%7

modulos = [-1]*7
distancia=0
for i in range(1,len(prefix)):
    if(modulos[prefix[i]]==-1):
        modulos[prefix[i]]=i
    else:
        distancia=max(distancia,i-modulos[prefix[i]])
print(distancia)