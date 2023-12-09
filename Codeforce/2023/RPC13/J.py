base = [["-","-","-"],
       ["-","-","-"],
       ["-","-","-"]]
figuras = {
    1:[["A","-","-"],
       ["B","-","-"],
       ["C","D","-"]],
    
    2:[["-","-","A"],
       ["-","-","B"],
       ["-","D","C"]],
    
    3:[["-","-","-"],
       ["A","B","-"],
       ["-","C","D"]],
    
    4:[["-","-","-"],
       ["-","C","D"],
       ["A","B","-"]],
    
    5:[["-","-","-"],
       ["-","D","-"],
       ["A","B","C"]],
    
    6:[["-","-","-"],
       ["A","B","-"],
       ["C","D","-"]]
}
def rotacionPositiva(figura):
    base = [["-","-","-"],
            ["-","-","-"],
            ["-","-","-"]]
    base[0][0]=figura[2][0]
    base[0][1]=figura[1][0]
    base[0][2]=figura[0][0]
    base[1][0]=figura[2][1]
    base[1][1]=figura[1][1]
    base[1][2]=figura[0][1]
    base[2][0]=figura[2][2]
    base[2][1]=figura[1][2]
    base[2][2]=figura[0][2]
    return base
    
valores = [int(x) for x in input().split()]
figura = figuras[valores[0]]
rotaciones = valores[1]
valoresRotaciones = valores[2:]
for i in range(len(valoresRotaciones)):
    if valoresRotaciones[i]==-180:
        valoresRotaciones[i]=180
    if valoresRotaciones[i]==-90:
        valoresRotaciones[i]=270
    if valoresRotaciones[i]==-270:
        valoresRotaciones[i]=90
        
for i in range(len(valoresRotaciones)):
    rotaciones = valoresRotaciones[i]//90
    rotacion = rotacionPositiva(figura)
    for i in range(rotaciones-1):
        rotacion=rotacionPositiva(rotacion)
    figura=rotacion
for i in figura:
    print(''.join(i))    
