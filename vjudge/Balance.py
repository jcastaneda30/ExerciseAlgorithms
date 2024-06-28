casos = int(input())

for i in range(casos):
    linea = input()
    comprobador=[]
    cosa=True
    for j in linea:
        if j=='(' or j=='[':
            comprobador.append(j)
        elif (j==')' or j==']'):
            if len(comprobador)==0:
                cosa=False
                break
            ultimo = comprobador.pop()
            if((j==')' and ultimo!='(') or (j!='[' and ultimo==']')):
                cosa=False
                break
    if(len(comprobador)!=0):
        cosa=False
    if(cosa):
        print("Yes")
    else:
        print("No")
            
            