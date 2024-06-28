n = int(input())

A = list(map(int,input().split()))
B = list(map(int,input().split()))

A.sort()
B.sort()

Apuntos = 0
Bpuntos = 0

end1=n-1
end2=n-1
while(end1>=0 or end2>=0):
    if((A[end1]>=B[end2] or end2<0) and end1>=0):
        Apuntos+=A[end1]
        end1-=1
    else:
        end2-=1
        
    if((A[end1]<=B[end2] or end1<0) and end2>=0):
        Bpuntos+=B[end2]
        end2-=1
    else:
        end1-=1

print(Apuntos-Bpuntos)