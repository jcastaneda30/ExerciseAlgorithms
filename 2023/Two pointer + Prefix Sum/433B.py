piedras=int(input())
cosas =input().split()
valorPiedras = [int(x)for x in cosas] #largo piedras
 
valorPiedrasAux =[] #prefix sum 
valorPiedrasAux2 = sorted(valorPiedras)
 
valorPiedrasAux3 =[] #prefix sum 
 
x = 0
z = 0
 
for i in range(len(valorPiedras)):
  x+= valorPiedras[i]
  valorPiedrasAux.append(x)
  z+= valorPiedrasAux2[i]
  valorPiedrasAux3.append(z)
q= int(input())
for j in range(q):
  y=input().split()
  y=[int(x) for x in y]
  if y[0]==1:
    if(y[1]-1==0):
      print(valorPiedrasAux[y[2]-1])
    else:
      print(valorPiedrasAux[y[2]-1]-valorPiedrasAux[abs(y[1]-2)])
 
  if y[0] == 2:
    if(y[1]-1)==0:
      print(valorPiedrasAux3[y[2]-1])
    else:
      print(valorPiedrasAux3[y[2]-1]-valorPiedrasAux3[abs(y[1]-2)])