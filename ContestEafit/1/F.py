def spell(matriz,hechizo):
    cout=0
    for i in range(len(matriz)-hechizo+1):
            for j in range(len(matriz)-hechizo+1):
                if matriz[i][j]==matriz[i][j+hechizo-1] and matriz[i][j]==matriz[i+hechizo-1][j] and matriz[i+hechizo-1][j]==matriz[i+hechizo-1][j+hechizo-1]:
                    cout+=1
    return cout


tmatriz,hechizo = map(int, input().split())
matriz=[]
for i in range(tmatriz):
    fila = list(map(int,input().split()))
    matriz.append(fila)

count=spell(matriz,hechizo)
print(count)