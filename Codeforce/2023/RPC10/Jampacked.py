n,k=map(int,input().split())
if(n%k==0):
    print(k)
elif(k>=n):
    print(n)
elif(k==1):
    print(k)
else:
    cajas=(n//k)+1
    respuesta = n//cajas
    print(respuesta)
