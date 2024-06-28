casos = int(input())

for i in range(casos):
    tamano = int(input())
    filas = []
    for j in range(tamano):
        wea = input()
        
        filas.append(wea)
    figura = []
    for j in range(tamano):
        counter=0
        for k in range(tamano):
            if filas[j][k]=='1':
                counter+=1
        if counter!=0:    
            figura.append(counter)
    figura=set(figura)
    
    if(len(figura)>1):
        print("TRIANGLE")
    else:
        print("SQUARE")

                
                