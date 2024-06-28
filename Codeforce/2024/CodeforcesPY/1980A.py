t = int(input())
for i in range(t):
    n, m = map(int, input().split())
    cadena = input()
    diccionario = {'A':0, 'B':0, 'C':0, 'D':0, 'E':0, 'F':0,'G':0}
    for i in range(len(cadena)):
        diccionario[cadena[i]]+=1
    
    coutn = 0
    
    for value in diccionario.values():
        if m-value>0:
            coutn+=m-value
    
    print(coutn)