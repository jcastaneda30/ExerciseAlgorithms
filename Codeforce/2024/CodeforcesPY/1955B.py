casos = int(input())

for i in range(casos):
    n,c,d=map(int,input().split())
    value = [int(x) for x in input().split()]
    value.sort()
    sublistas = [value[i:i+n] for i in range(0, len(value), n)]    
    contruccion = [[0]*n for i in range(0, len(value), n)]
    contruccion[0][0]=sublistas[0][0]
    for h in range(n-1):
        for j in range(n-1):
            contruccion[h+1][j]=contruccion[h][j]+c
            contruccion[h][j+1]=contruccion[h][j]+d        
    contruccion[n-1][n-1]=contruccion[n-1][n-2]+d
    granLista=sum(contruccion,[])
    granLista.sort()
    if granLista==value:
        print("YES")
    else:
        print("NO")
    
