N,M=map(int,input().split())
S=input()
counter=[]
contadorPlains=0
contadorLogo=0
for i in range(N):
    if(S[i]=='1'):
        if(contadorPlains==M):
            contadorLogo+=1
            continue
        contadorPlains+=1
    if(S[i]=='2'):
        contadorLogo+=1
        continue
    if(S[i]=='0'):
        if(contadorLogo!=0):
            counter.append(contadorLogo)
        contadorLogo=0
        contadorPlains=0
if(contadorLogo!=0):
    counter.append(contadorLogo)
minimo=1e9
if(len(counter)==0):
    minimo=0
else:
    minimo=max(counter)
print(minimo)
        
    