n=int(input())
A=[int(x) for x in input().split()]
m=int(input())
B=[int(x) for x in input().split()]
punteroA=0
punteroB=0
sumaA=A[0]
sumaB=B[0]
posible=0
if sum(A)==sum(B):
    while(punteroA<n-1 and punteroB<m-1):
        if sumaA==sumaB:
            posible+=1
            punteroA+=1
            punteroB+=1
            sumaA=A[punteroA]
            sumaB=B[punteroB]
            continue
        if sumaA>sumaB:
            punteroB+=1
            sumaB+=B[punteroB]
        else:
            punteroA+=1
            sumaA+=A[punteroA]
    print(posible+1)
else:
    print("-1")