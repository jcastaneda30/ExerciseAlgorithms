N,S,K=map(int,input().split())
counter=0
for i in range(N):
    P,Q=map(int,input().split())
    counter+=P*Q
    
if counter<S:
    counter+=K

print(counter)